# Complete the solve function below.
def solve(s):
    lst = [v.capitalize() for v in s.split(' ')]
    return ' '.join(lst)

if __name__ == '__main__':
    s = input()
    result = solve(s)
    print(result)