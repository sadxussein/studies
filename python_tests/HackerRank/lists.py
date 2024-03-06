N = int(input())
list = []
for _ in range(N):
    argv = input().split()
    if argv[0] == 'insert':
        list.insert(int(argv[1]), int(argv[2]))
    elif argv[0] == 'print':
        print(list)
    elif argv[0] == 'remove':
        list.remove(int(argv[1]))
    elif argv[0] == 'append':
        list.append(int(argv[1]))
    elif argv[0] == 'sort':
        list.sort()
    elif argv[0] == 'pop':
        list.pop()
    elif argv[0] == 'reverse':
        list = list[::-1]