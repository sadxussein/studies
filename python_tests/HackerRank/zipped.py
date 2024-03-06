N, X = map(int, input().split())
subjects = []
for _ in range(X):
    subjects.append(map(float, input().split()))

for student in list(zip(*subjects)):
    print(sum(student)/len(student))