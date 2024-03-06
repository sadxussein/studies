from itertools import combinations

s, n = input().split()
for m in range(int(n)):
    for i in combinations(sorted(list(s)), m+1):
        print(''.join(i))