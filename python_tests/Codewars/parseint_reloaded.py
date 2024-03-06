from collections import OrderedDict


def parse_int(string):
    numbers_words = OrderedDict([
        ('zero', 0), ('one', 1), ('two', 2), ('three', 3), ('four', 4), ('five', 5),
        ('six', 6), ('seven', 7), ('eight', 8), ('nine', 9), ('ten', 10),
        ('eleven', 11), ('twelve', 12), ('thirteen', 13), ('fourteen', 14), ('fifteen', 15),
        ('sixteen', 16), ('seventeen', 17), ('eighteen', 18), ('nineteen', 19), ('twenty', 20),
        ('thirty', 30), ('forty', 40), ('fifty', 50), ('sixty', 60), ('seventy', 70),
        ('eighty', 80), ('ninety', 90), ('million', 1000000)
    ])
    words = string.split()
    result = 0
    i = 0
    while i < len(words):
        temp = 0
        if words[i] not in "hundred thousand million":
            if '-' in words[i]:
                temp += numbers_words[words[i].split('-')[0]] + numbers_words[words[i].split('-')[1]]
            else:
                temp += numbers_words[words[i]]
        if i < len(words) - 1 and "million" in words[i + 1:]:
            temp *= 1000000
        if i < len(words) - 1 and "thousand" in words[i+1:]:
            temp *= 1000
        if i < len(words) - 1 and "hundred" in words[i+1]:
            temp *= 100
        result += temp
        i += 1

    # [n hundred n-n/n thousand n-n/n hundred n-n/n]

    # for word in words:
    #     if '-' in word:
    #         result += str(numbers_words[word.split('-')[0]] + numbers_words[word.split('-')[1]])
    #     elif word in ["hundred", "thousand", "and"]:
    #         continue
    #     else:
    #         result += str(numbers_words[word])
    # return int(result)
    return result


S = input()
print(parse_int(S))
