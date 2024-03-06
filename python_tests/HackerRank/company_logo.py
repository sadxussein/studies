from collections import OrderedDict
from itertools import groupby

s = input()
d = OrderedDict()

for l in s:
    if l in d: d[l] += 1
    else: d[l] = 1

res = groupby(d.items(), key=lambda x: x[1])
dic = OrderedDict()
for k, v in res:
    if k in dic: dic[k] += list(v)
    else: dic[k] = list(v)
dic = OrderedDict(sorted(dic.items(), reverse=True))
for k, v in dic.items():
    dic[k] = sorted(dic[k])
output = 0
for k, v in dic.items():
    for e in v:
        if output < 3:
            print(e[0], e[1])
            output += 1
        else: break