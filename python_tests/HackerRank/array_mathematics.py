import numpy

N, _ = map(int, input().split())
a = numpy.array(list(list(map(int, input().split())) for i in range(N)))
b = numpy.array(list(list(map(int, input().split())) for i in range(N)))

print(a + b)
print(a - b)
print(a * b)
print(numpy.floor_divide(a ,b))
print(a % b)
print(a ** b)