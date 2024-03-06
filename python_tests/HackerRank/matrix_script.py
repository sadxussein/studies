import numpy

N, _ = map(int, input().split())
matrix = numpy.array(list(list(input()) for _ in range(N)))
result = ''
for line in numpy.transpose(matrix):
    result += ''.join(line)
print(result)
