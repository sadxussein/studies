import numpy

a = numpy.array(list(map(float, input().split())))
print(numpy.floor(a))
print(numpy.ceil(a))
print(numpy.rint(a))