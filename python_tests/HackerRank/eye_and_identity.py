import numpy

numpy.set_printoptions(legacy='1.13')
print(numpy.eye(*list(map(int, input().split()))))
