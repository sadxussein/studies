from collections import defaultdict

d = defaultdict(list)
n, m = map(int, input().split())

for i in range(n):
    d['A'].append(input())
for i in range(m):
    d['B'].append(input())
    
for i in range(m):
    if d['B'][i] not in d['A']:
        print('-1')
        continue
    else:
        for j in range(n):
            if d['B'][i] == d['A'][j]: 
                print(j+1, end=' ')
        print()