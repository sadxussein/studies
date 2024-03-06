from collections import OrderedDict

n = int(input())
od = OrderedDict()
for _ in range(n):
    list = [*input().split()]
    price = list.pop(len(list)-1)
    name = ' '.join(list)
    if name in od:
        od[name] += int(price)
    else:
        od[name] = int(price)

for k, v in od.items():
    print(k, v)