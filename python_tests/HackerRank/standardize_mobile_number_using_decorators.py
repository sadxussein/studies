def wrapper(f):
    def fun(l):
        res = []
        for p in l:
            p = '+91 ' + p[-10:-5] + ' ' + p[-5:]
            res.append(p)
        return f(res)
    return fun

@wrapper
def sort_phone(l):
    print(*sorted(l), sep='\n')

if __name__ == '__main__':
    l = [input() for _ in range(int(input()))]
    sort_phone(l)
