def rot13(message):
    result = ''
    # so here we simply translate every character to its ASCII index
    for letter in message:
        # if first half of alphabet, lowercase or uppercase
        if ord(letter) in range(97, 110) or ord(letter) in range(65, 78):
            # then translate it back into new position (other half)
            result += chr(ord(letter) + 13)
        # if second half of alphabet, lowercase or uppercase
        elif ord(letter) in range(110, 123) or ord(letter) in range(78, 91):
            result += chr(ord(letter) - 13)
        # every symbol which is not letter
        else:
            result += letter
    return result


S = input()
print(rot13(S))
