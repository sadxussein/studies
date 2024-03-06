import re

hexes = []
for _ in range(int(input())):
    hexes = list(re.findall(r"(?<!^)#[0-9A-Fa-f]{3,6}", input()))
    if any(hexes):
        print(*hexes, sep='\n')