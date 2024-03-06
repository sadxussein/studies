from collections import Counter
_ = int(input())
l = Counter(list(map(int, input().split())))
print(*list(filter(lambda x: l[x] == 1, l)))