import re

s = input()
k = input()

m = re.finditer(f"(?=({k}))", s)

if re.search(k, s):
    for x in m:
        print((x.start(1), x.end(1)-1))
else:
    print((-1, -1))