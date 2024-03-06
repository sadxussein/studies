from fractions import Fraction
from functools import reduce

l = []
for _ in range(int(input())):
    a, b = map(int, input().split())
    l.append(Fraction(a, b))
result = reduce(lambda x, y: x * y, l)
print(result.numerator, result.denominator)
