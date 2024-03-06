import numpy

N, M = map(int, input().split())
arr = numpy.empty((N, M), int)
for i in range(N):
    arr[i] = list(map(int, input().split()))
print(arr.transpose())
print(arr.flatten())