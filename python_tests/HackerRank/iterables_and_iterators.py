from itertools import combinations

N = int(input())
l = input().split()
K = int(input())

a_posns = [i+1 for i in range(len(l)) if l[i] == 'a']

count = 0

for a in combinations(range(1, N+1), K):
    for p in a_posns:
        if p in a:
            count += 1
            break

print(count/len(list(combinations(range(1, N+1), K))))