def merge_the_tools(string, k):
    res = []
    if k != len(string):
        for i in range(0, len(string), k): 
            s = list(string[i:i+k])            
            r = {}
            for l in s:
                r[l] = 1
            res.append(r)
    else:        
        s = list(string)        
        r = {}
        for l in s:
            r[l] = 1
        res.append(r)
    for r in res:
        print(''.join(r))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)