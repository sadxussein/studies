y, x = map(int, input().split())

line = ''

for j, i in zip(range(1, y, 2), range(x-3, 0, -6)):
    line = line + '-'*int(i/2) + j*'.|.' + '-'*int(i/2) + '\n'
    
line = line + '-'*int((x-7)/2) + 'WELCOME' + '-'*int((x-7)/2) + '\n'
    
for j, i in zip(range(y-2, 0, -2), range(6, x, 6)):
    line = line + '-'*int(i/2) + j*'.|.' + '-'*int(i/2) + '\n'
    
print(line)