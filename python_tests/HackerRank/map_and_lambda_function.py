cube = lambda x: x**3

def fibonacci(n):
    res = []
    for i in range(n):
        if i == 0:
            res.append(0)
        elif i == 1:
            res.append(1)
        else:
            res.append(res[i-1]+res[i-2])
    return res

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))