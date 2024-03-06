import numpy

N = int(input())
A = numpy.array(list(list(map(int, input().split())) for _ in range(N)))
B = numpy.array(list(list(map(int, input().split())) for _ in range(N)))
print(numpy.dot(A, B))
