n = int(input())
s = set(map(int, input().split()))

for _ in range(int(input())):
    argv = input().split()
    if argv[0] == "pop":
        s.pop()
    if argv[0] == "remove":
        s.remove(int(argv[1]))
    if argv[0] == "discard":
        s.discard(int(argv[1]))
        
print(sum(s))