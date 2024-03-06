d = []
for _ in range(int(input())):
	name = input()
	score = float(input())
	d.append([name, score])
d = list(sorted(d, key=lambda i: i[1]))

l = []
c = 0
for e in d:
    if e[1] == d[0][1]: c = c + 1
for e in d[c:]:
    if e[1] == d[c][1]: l.append(e[0])
    else: break
    
for e in sorted(l): print(e)