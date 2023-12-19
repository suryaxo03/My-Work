##x = 5
##m = 4
##d = 100

##tc = int(input())
##for i in range(tc):
##    x, m, d = map(int, input().split())
##    a = x*m
##    b = x+d
##    li = [a, b]
##    print(min(li))

#00 - A, 01 - T, 10 - C, 11 - G
##bl = {'00': 'A', '01': 'T', '10': 'C', '11': 'G'}
##tt = int(input())
##for i in range(tt):
##    le = int(input())
##    bs = input()
##    li = []
##    for i in range(0, le, 2):
##        sp = bs[i:i+2]
##        li.append(sp)
##    re = []
##    for i in li:
##        i = bl.get(i)
##        re.append(i)
##    for i in re:
##        print(i, end='')
##    print()

##tc = int(input())
##i = 0
##while i < tc:
##    le = int(input())
##    bs = input()
##    if len(bs) != le:
##        continue
##    for j in range(0, le, 2):
##        if bs[j] == '0' and bs[j+1] == '0':
##            print('A', end='')
##        elif bs[j] == '0' and bs[j+1] == '1':
##            print('T', end='')
##        elif bs[j] == '1' and bs[j+1] == '0':
##            print('C', end='')
##        elif bs[j] == '1' and bs[j+1] == '1':
##            print('G', end='')
##    i += 1
##    print()

##S -> N => A -> 1 to N/2 and B -> N/2+1 to N
##S[L,R] L - starting index, len = R-L+1
##tc = int(input())
##
##for i in range(tc):
##    n = int(input())
##    s = input()[:n]
##    a = ''
##    b = ''
##    for j in range(0, n):
##        if j < n/2:
##            a += s[j]
##        elif j >= n/2:
##            b += s[j]
##    if a==b:
##        print('YES')
##    else:
##        print('NO')


tc = int(input())
for i in range(tc):
    x, y = map(int, input().split())
    z = (x+y)//2
    print(max(abs(x-z), abs(y-z)))
    
    
    
