def create_phone_number(n):
    return "({}{}{}) {}{}{}-{}{}{}{}".format(*n)


S = list(map(int, input().split()))
print(create_phone_number(S))