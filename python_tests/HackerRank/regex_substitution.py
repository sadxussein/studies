import re

for _ in range(int(input())):
    line = input()
    while re.search(r" && ", line) is not None or re.search(r" \|\| ", line) is not None:
        line = re.sub(r" && ", " and ", line)
        line = re.sub(r" \|\| ", " or ", line)
    print(line)
