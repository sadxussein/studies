import numpy

N, _ = map(int, input().split())
arr = numpy.array(list(list(map(int, input().split())) for i in range(N)))
print(numpy.mean(arr, axis=1))
print(numpy.var(arr, axis=0))
print(numpy.std(arr, axis=None))
