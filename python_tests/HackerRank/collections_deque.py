from collections import deque

d = deque()

for _ in range(int(input())):
    argv = input().split()
    if argv[0] == "append":
        d.append(int(argv[1]))
    if argv[0] == "appendleft":
        d.appendleft(int(argv[1]))
    if argv[0] == "pop":
        d.pop()
    if argv[0] == "popleft":
        d.popleft()

for el in d:     
    print(el, end=' ')