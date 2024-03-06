n = int(input())
arr = map(int, input().split())

arr = list(sorted(arr, reverse=True))
print(arr[arr.count(arr[0])])