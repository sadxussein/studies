for _ in range(int(input())):
    _ = int(input())
    A = set(map(int, input().split()))
    _ = int(input())
    B = set(map(int, input().split()))
    print(A.issubset(B))