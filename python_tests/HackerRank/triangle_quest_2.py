for i in range(1,int(input())+1): #More than 2 lines will result in 0 score. Do not leave a blank line also
    # print(*[a+1 for a in range(i)], *[a for a in range(i-1, 0, -1)], sep='')
    print (((10**i-1)//9)**2)