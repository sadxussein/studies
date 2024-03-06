from itertools import groupby

s = [*input()]
for key, group in groupby(s, key = lambda x: x):
    res = (len(list(group)), int(key))
    print(res, end=' ')