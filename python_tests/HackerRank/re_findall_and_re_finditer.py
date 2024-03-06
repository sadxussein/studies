import re

s = list(re.finditer(r"((?<=[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm])[AOEUIaoeui]{2,}(?=[?=QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm]))", input()))
if any(s):
    print(*list(map(lambda x: x.group(), s)), sep='\n')
else:
    print("-1")