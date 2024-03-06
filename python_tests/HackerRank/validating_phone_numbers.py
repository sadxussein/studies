import re

for _ in range(int(input())):
    res = re.match(r"^[7-9]([0-9]){9}$", input())
    if res:
        print("YES")
    else:
        print("NO")
    