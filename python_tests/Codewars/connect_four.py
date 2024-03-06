class Piece:
    def __init__(self):
        self.color = None


def check_direction(field, x, y, offset_x, offset_y, direction):
    if field[x][y].color == field[x + direction * offset_x][y + direction * offset_y].color:
        # print("if, orig coords:", x, y, "neighbor coords:", x + direction * offset_x, y + direction * offset_y,
        #       "offset:", offset_x, offset_y, "direction:", direction)
        return 1 + check_direction(field, x + direction * offset_x, y + direction * offset_y,
                                   offset_x, offset_y, direction)
    else:
        # print("else, orig coords:", x, y, "neighbor coords:", x + direction * offset_x, y + direction * offset_y,
        #       "offset:", offset_x, offset_y, "direction:", direction)
        return 1


def get_sequence_len(field, x, y, offset_x, offset_y):
    left = check_direction(field, x, y, offset_x, offset_y, -1)
    right = check_direction(field, x, y, offset_x, offset_y, 1)
    return left + right - 1


def who_is_winner(pieces_position_list):
    field_names = ['A', 'B', 'C', 'D', 'E', 'F', 'G']
    row_heights = [0, 0, 0, 0, 0, 0, 0, 0, 0]

    # test_field = [[], [], [], [], [], [], []]
    # for piece in pieces_position_list:
    #     test_field[field_names.index(piece[0])].append(piece[2])
    # for i in range(7):
    #     test_field[i] = test_field[i] + ['-'] * (7 - len(test_field[i]))
    # for i in range(7):
    #     for j in range(6):
    #         print(test_field[i][j], end=' ')
    #     print()
    # print()

    game_field = [[Piece() for j in range(8)] for i in range(9)]
    for piece in pieces_position_list:
        cur_col = field_names.index(piece[0]) + 1
        cur_row = row_heights[cur_col] + 1
        row_heights[cur_col] += 1
        game_field[cur_col][cur_row].color = piece[2:]
        for offset in ((-1, 1), (0, 1), (1, 1), (-1, 0)):
            res = get_sequence_len(game_field, cur_col, cur_row, offset[0], offset[1])
            # print(cur_col, cur_row, game_field[cur_col][cur_row].color, res)
            if res > 3:
                return game_field[cur_col][cur_row].color
    return "Draw"


print(who_is_winner(['A_Red', 'B_Yellow', 'D_Red', 'B_Yellow', 'C_Red', 'A_Yellow', 'E_Red', 'A_Yellow', 'G_Red', 'G_Yellow', 'F_Red', 'B_Yellow', 'A_Red', 'F_Yellow', 'E_Red', 'E_Yellow', 'E_Red', 'D_Yellow', 'E_Red', 'D_Yellow', 'A_Red', 'D_Yellow', 'C_Red', 'D_Yellow', 'A_Red']))
# Red
print(who_is_winner(['F_Red', 'A_Yellow', 'C_Red', 'G_Yellow', 'A_Red', 'A_Yellow', 'C_Red', 'A_Yellow', 'B_Red', 'C_Yellow', 'B_Red', 'D_Yellow', 'E_Red', 'B_Yellow', 'E_Red', 'F_Yellow', 'G_Red', 'F_Yellow', 'D_Red', 'G_Yellow', 'G_Red', 'E_Yellow', 'B_Red', 'D_Yellow', 'G_Red', 'B_Yellow', 'E_Red', 'B_Yellow']))
# Red
print(who_is_winner(['A_Red', 'A_Yellow', 'E_Red', 'A_Yellow', 'B_Red', 'E_Yellow', 'D_Red', 'G_Yellow', 'B_Red', 'G_Yellow', 'A_Red', 'F_Yellow', 'E_Red', 'D_Yellow', 'C_Red', 'D_Yellow', 'C_Red', 'B_Yellow', 'G_Red', 'D_Yellow', 'D_Red', 'B_Yellow', 'D_Red']))
# Red
print(who_is_winner(['D_Red', 'C_Yellow', 'A_Red', 'A_Yellow', 'E_Red', 'G_Yellow', 'A_Red', 'C_Yellow', 'C_Red', 'D_Yellow', 'B_Red', 'F_Yellow', 'G_Red', 'E_Yellow', 'F_Red', 'C_Yellow', 'A_Red', 'G_Yellow', 'D_Red', 'C_Yellow', 'A_Red', 'B_Yellow', 'A_Red']))
# Yellow
print(who_is_winner(['B_Red', 'G_Yellow', 'A_Red', 'B_Yellow', 'A_Red', 'A_Yellow', 'B_Red', 'G_Yellow', 'E_Red', 'F_Yellow', 'C_Red', 'C_Yellow', 'D_Red', 'D_Yellow', 'E_Red', 'A_Yellow', 'B_Red', 'C_Yellow', 'F_Red', 'G_Yellow', 'C_Red', 'C_Yellow', 'F_Red', 'F_Yellow', 'C_Red']))
# Red
print(who_is_winner(['D_Red', 'D_Yellow', 'B_Red', 'B_Yellow', 'F_Red', 'D_Yellow', 'E_Red', 'A_Yellow', 'E_Red', 'E_Yellow', 'B_Red', 'F_Yellow', 'D_Red', 'E_Yellow', 'C_Red', 'F_Yellow', 'D_Red', 'F_Yellow', 'F_Red', 'D_Yellow']))
# Red