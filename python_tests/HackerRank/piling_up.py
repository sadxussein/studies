from collections import deque

T = int(input())

for _ in range(T):
    n = int(input())
    cubes = deque(map(int, input().split()))
    piled_cubes = [2**32]
    i = n-1
    while len(cubes) > 0:
        if cubes[i] >= cubes[0]:
            if cubes[i] <= piled_cubes[len(piled_cubes)-1]:
                piled_cubes.append(cubes.pop())
                i -= 1
            else: 
                print("No")
                break
        else:
            if cubes[0] <= piled_cubes[len(piled_cubes)-1]:
                piled_cubes.append(cubes.popleft())
                i -= 1
            else: 
                print("No")
                break
     
    if len(cubes) == 0:
        print("Yes")