import re

t = int(input())
for _ in range(t):
    try:
        res = re.compile(input())        
    except re.error as e:
        print(False)
    else:
        print(True)