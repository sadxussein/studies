N, M = map(int, input().split())
arr = list(list(map(int, input().split())) for _ in range(N))
K = int(input())
arr = sorted(arr, key=lambda x: x[K])
for a in arr:
    print(*a)
