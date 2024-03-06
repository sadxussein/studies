import re

def validate_line(line):
    if len(re.findall(r"[A-Z]", line)) < 2:   
        return False
    if len(re.findall(r"[0-9]", line)) < 3:
        return False
    if not re.match(r"^[a-zA-Z0-9]{10}$", line):
        return False
    if len(set(line)) != len(line):
        return False
    return True
    
    
# (?!.*(.).*\1)[a-zA-Z0-9]{10}
# with open('D:\Program Files\python\output.txt', 'w') as file:
for _ in range(int(input())):
    # res = re.match(r"^(?!.*(.).*\1)[A-Za-z0-9]{10}$", input())
    if validate_line(input()):
        print("Valid")
    else:
        print("Invalid")