def is_pangram(s):
    print(set(ord(c) for c in s.lower() if ord(c) in range(97, 123)))
    if len(set(ord(c) for c in s.lower() if ord(c) in range(97, 123))) == 26:
        return True
    return False


S = input()
print(is_pangram(S))
