s = input()
l = [*s]
res = [False, False, False, False, False]
for e in l:
    if e.isalnum(): 
        res[0] = True
        break
for e in l:
    if e.isalpha(): 
        res[1] = True
        break
for e in l:
    if e.isdigit(): 
        res[2] = True
        break
for e in l:
    if e.islower(): 
        res[3] = True
        break
for e in l:
    if e.isupper(): 
        res[4] = True
        break
for r in res:
    print(r)