def solution(args):
    args = list(map(int, args.split()))
    result = []
    index = 0
    while index < len(args) - 2:
        offset = 2
        if abs(args[index + offset] - args[index]) == offset:
            offset += 1
            while index + offset < len(args) and abs(args[index + offset] - args[index]) == offset:
                offset += 1
            result.append(f"{args[index]}-{args[index + offset - 1]}")
            index += offset
        else:
            result.append(args[index])
            index += 1
    else:
        for el in args[index:]:
            result.append(el)
    return ','.join(str(el) for el in result)


S = input()
print(solution(S))
