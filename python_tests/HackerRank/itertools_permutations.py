from itertools import permutations

inp = tuple(input().split())
letters = list(inp[0])
k = int(inp[1])

for r in sorted(list(permutations(letters, k))):
    print(''.join(r))