for _ in range(int(input())):
    try:
        f = float(input())
        if f == 0:
            print(False)
        else:
            print(True)
    except (ValueError, TypeError):
        print(False)