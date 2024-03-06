import numpy

N, _ = map(int, input().split())
arr = numpy.array(list(list(map(int, input().split())) for i in range(N)))
arr = numpy.sum(arr, axis=0)
print(numpy.prod(arr))