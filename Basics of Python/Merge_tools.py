##s = 'AAABCADDE'
##l = len(s)
##k = 3
##res = ''
##li = []
####for i in range(k):
####    res = s[i*k:(i+1)*k]
####    li.append(res)
##for i in range(k):
##    for j in range(k):
##        res = s[(i)*(j+1):(j+1)*(i+1)]
##        li.append(res)
##li1 = []
##
##print(li)

string = 'AAABCADD'
k = 4
n = len(string)
s1 = ''
s2 = ''
c = 0
li1 = []
li2 = []
if n%k == 0:
    x = n//k
    for i in string:
        s1 = s1+i
        c = c+1
        if c%x == 0:
            li1.append(s1)
            s1 = ''
    for i in li1:
        for j in i:
            if j not in s2:
                s2 = s2 + j
        print(s2)
        s2 = ''
