n = int(input())

for i in range(n):
    a, b = input().split()
    try:
        a = int(a)
        b = int(b)
    except ValueError as e: 
        print("Error Code:", e)
        continue
    try: 
        print(int(a / b))
    except ZeroDivisionError as e:
        print("Error Code: integer division or modulo by zero")