import numpy

N, M, P = map(int, input().split())
first_arr = numpy.array(list(list(map(int, input().split())) for i in range(N)))
second_arr = numpy.array(list(list(map(int, input().split())) for i in range(M)))
print(numpy.concatenate((first_arr, second_arr), axis=0))
