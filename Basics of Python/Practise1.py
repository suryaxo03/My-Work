# cook your dish here
##tc = int(input())
##for i in range(tc):
##    n = int(input())
##    count = 0
##    while n%100==0:
##        count += 1
##    print(count)
##n = 1200
##c = 0
##if n%100 == 0:
##    s = n//100
##    for i in range(s):
##        n = n//100
##        c += 1
##print(c)
##
# cook your dish here
# cook your dish here
# cook your dish here
tc = int(input())
for i in range(tc):
    n = int(input())
    c = 0
    d = 0
    if n>=100:
        d = n//100
        n -= d*100
        c += d
    print(1, n)
    if n>=50:
        d = n//50
        n -= d*50
        c += d
    print(2, n)
    if n>=10:
        d = n//10
        n -= d*10
        c += d
    print(3, n)
    if n>=5:
        d = n//5
        n -= d*5
        c += d
    print(4, n)
    if n>=2:
        d = n//2
        n -= d*2
        c += d
    print(5, n)
    if n>=1:
        d = n//1
        n -= d*1
        c += d
    print(6, n)
    
    print(c)
        
