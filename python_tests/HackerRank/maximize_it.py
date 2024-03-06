# def prime_factors(n):
    # factors = []
    # d = 2
    # while d * d <= n:
        # if n % d == 0:
            # factors.append(d)
            # n //= d
        # else:
            # d += 1
    # if n > 1:
        # factors.append(n)
    # return factors

K, M = map(int, input().split())
N = []
for _ in range(K):
    # N.append(list(map(lambda x: x**2, (list(map(int, input().split())))))[1:])
    # N.append(sorted(list(map(lambda x: x % M, (list(map(int, input().split())))))[1:], reverse=True))
    N.append(sorted(list(map(lambda x: x % M, list(map(lambda x: x**2, (list(map(int, input().split())))))[1:])), reverse=True))
    # N.append(list(map(prime_factors, (list(map(int, input().split())))))[1:])
    # N.append(list(map(int, input().split()))[1:])
print(N)



