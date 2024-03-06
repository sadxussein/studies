def hamming(n):
    ham = [1]
    x2 = x3 = x5 = 0
    while len(ham) < n:
        next_ham = min(ham[x2] * 2, ham[x3] * 3, ham[x5] * 5)
        ham.append(next_ham)
        if next_ham == ham[x2] * 2:
            x2 += 1
        if next_ham == ham[x3] * 3:
            x3 += 1
        if next_ham == ham[x5] * 5:
            x5 += 1
    return ham[-1]


print(hamming(101))
print(hamming(9))
print(hamming(10))
