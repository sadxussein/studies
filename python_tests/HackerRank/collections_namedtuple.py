from collections import namedtuple

n = int(input())
data = namedtuple('data', [*input().split()])
students = []
for _ in range(n):
    students.append(data(*input().split()))

res = 0
for d in students:
    res += int(d.MARKS)
print(res/n)