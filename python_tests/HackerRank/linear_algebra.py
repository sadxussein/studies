import numpy

N = int(input())
A = numpy.array(list(list(map(float, input().split())) for _ in range(N)))
print(round(numpy.linalg.det(A), 2))
