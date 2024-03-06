from collections import Counter

shoe_amount = int(input())
shoe_size_list = Counter(map(int, input().split()))
cust_amount = int(input())
result = 0

for i in range(cust_amount):
    size, price = map(int, input().split())
    if shoe_size_list[size] != 0:
        shoe_size_list[size] -= 1
        result += price

print(result)