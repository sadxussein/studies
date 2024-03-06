n = int(input())
l = list(map(int, input().split()))
if all(m > 0 for m in l):
    if any(str(m) == str(m)[::-1] for m in l):
        print(True)
    else:
        print(False)
else:
    print(False)