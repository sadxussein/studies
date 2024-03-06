def sum_strings(x, y):
    if not x.isdigit() and not y.isdigit():
        return '0'
    if len(x) > len(y):
        main_len = len(x)
        sub_len = len(y)
    else:
        main_len = len(y)
        sub_len = len(x)
    diff = main_len - sub_len
    print(x, y)
    result = ''
    residue = 0
    for i in range(sub_len - 1, -1, -1):
        print(i, result)
        if int(x[i + diff]) + int(y[i]) + residue < 10:
            result = str(int(x[i + diff]) + int(y[i]) + residue) + result
            residue = 0
        else:
            result = str((int(x[i + diff]) + int(y[i]) + residue) % 10) + result
            residue = 1
    if residue == 1:
        result = str(residue) + result

    if len(result) > 1:
        return result.lstrip('0')
    else:
        return result


X, Y = input().split()
print(sum_strings(X, Y))

