def print_rangoli(size):
    width = 1+(size-1)*4
    ch_list = ['a']
    for c in range(98, 97+size):
        ch_list.insert(0, chr(c))
    for i in range(size):
        if i>0:
            print(('-'.join(['-'.join(ch_list[:i+1]), '-'.join(ch_list[i-1::-1])])).center(width, '-'))
        else: 
            print((''.join(ch_list[:1])).center(width, '-'))
    for i in range(size-2, -1, -1):
        if i>0:
            print(('-'.join(['-'.join(ch_list[:i+1]), '-'.join(ch_list[i-1::-1])])).center(width, '-'))
        else: 
            print((''.join(ch_list[:1])).center(width, '-'))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)