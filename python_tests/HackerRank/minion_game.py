def minion_game(string):
    kevin, stuart = 0, 0
    
    for l in range(len(string)):
        if string[l] in 'AEIOU':
            kevin += len(string)-l
        else:
            stuart += len(string)-l
                    
    if kevin > stuart: print("Kevin", kevin)
    elif stuart > kevin: print("Stuart", stuart)
    else: print("Draw")   

if __name__ == '__main__':
    s = input()
    minion_game(s)