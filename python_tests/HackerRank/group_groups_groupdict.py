import re

s = re.findall(r"([a-zA-Z0-9])\1+", input())
if s:
    print(s[0])
else:
    print("-1")

