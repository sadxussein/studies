list = [*input()]
res = ''
for l in list:
    if l.islower(): res += l.upper()
    elif l.isupper(): res += l.lower()
    else: res += l
print(res)