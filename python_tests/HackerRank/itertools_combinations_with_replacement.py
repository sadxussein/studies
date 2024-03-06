from itertools import combinations_with_replacement

s, n = input().split()
res = sorted(list(combinations_with_replacement(sorted(s), int(n))))
for el in res:
    print(''.join(el))