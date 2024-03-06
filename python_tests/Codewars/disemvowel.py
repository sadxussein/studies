def disemvowel(string_):
    return ''.join([consonant for consonant in string_ if consonant not in "AOEIUaoeiu"])


S = input()
print(disemvowel(S))
