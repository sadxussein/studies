import numpy

coefficients = list(map(float, input().split()))
print(numpy.polyval(coefficients, int(input())))
