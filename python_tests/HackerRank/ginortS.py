import re

S = input()
print(''.join(sorted(re.findall(r"[a-z]", S))), end='')
print(''.join(sorted(re.findall(r"[A-Z]", S))), end='')
print(''.join(sorted(re.findall(r"[13579]", S))), end='')
print(''.join(sorted(re.findall(r"[24680]", S))), end='')