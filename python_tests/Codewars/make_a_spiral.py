def spiralize(size):
    field = [[0 for _ in range(size)] for _ in range(size)]
    field[0] = [1 for _ in range(size)]
    offset, line_len = 0, size
    x, y = 0, size - 1
    direction = 2
    last = False
    while line_len > 1:
        if line_len == 2 and size % 2 == 0 and last == True:
            line_len -= 1
        elif line_len == 2 and size % 2 == 0:
            last = True

        if direction % 4 == 1:
            for i in range(offset, line_len + offset):
                field[x][i] = 1
            line_len -= 2
            offset += 2
            y = i
        elif direction % 4 == 2:
            for i in range(offset, line_len + offset):
                field[i][y] = 1
            x = i
        elif direction % 4 == 3:
            for i in range(offset, line_len + offset):
                field[x][-(i + 1)] = 1
            line_len -= 2
            y = size - (i + 1)
        elif direction % 4 == 0:
            for i in range(offset, line_len + offset):
                field[-(i + 1)][y] = 1
            x = size - (i + 1)
        direction += 1

    return field


print(spiralize(32))

