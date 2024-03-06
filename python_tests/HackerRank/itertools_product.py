import itertools

list_a = list(map(int, input().split()))
list_b = list(map(int, input().split()))

for el in itertools.product(list_a, list_b):
    print(el, end=' ')