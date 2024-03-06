_ = int(input())
s = set(map(int, input().split()))
for _ in range(int(input())):
    c, n = input().split()
    if c == 'intersection_update':
        s &= set(map(int, input().split()))
    elif c == 'update':
        s |= set(map(int, input().split()))
    elif c == 'symmetric_difference_update':
        s ^= set(map(int, input().split()))
    elif c == 'difference_update':
        s -= set(map(int, input().split()))
print(sum(s))