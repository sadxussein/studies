import numpy

N, _ = map(int, input().split())
arr = numpy.array(list(list(map(int, input().split())) for i in range(N)))
print(numpy.max(numpy.min(arr, axis=1)))