def wave(people):
    result = []
    if people == "":
        return result
    if people[0] != ' ':
        result = [people[0].upper() + people[1:]]
    for i in range(1, len(people) - 1):
        if people[i].isalpha():
            result.append(people[:i] + people[i].upper() + people[i + 1:])
    if people[-1] != ' ' and len(people) != 1:
        result.append(people[:-1] + people[-1].upper())
    return result


S = input()
print(wave(S))
