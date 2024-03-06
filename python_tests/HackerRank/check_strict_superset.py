A = set(map(int, input().split()))
F = True
for _ in range(int(input())):
    if not A.issuperset(set(map(int, input().split()))):
        F = False
        print(F)
        break
if F:
    print(F)