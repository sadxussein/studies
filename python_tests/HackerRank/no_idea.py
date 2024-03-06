n, m = map(int, input().split())

arr = list(map(int, input().split()))
A = set(map(int, input().split()))
B = set(map(int, input().split()))

res = 0

for i in range(n):
    if arr[i] in A:
        res += 1
    if arr[i] in B: 
        res -= 1
        
print(res)