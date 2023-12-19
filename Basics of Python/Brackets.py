string = input()
flag = False
temp = ""
for i in string:
    if i == ')' and temp[-1] == '(':
        temp = temp[:-1]
    elif i == ']' and temp[-1] == '[':
        temp = temp[:-1]
    elif i == '}' and temp[-1] == '{':
        temp = temp[:-1]
    else:
        temp += i

if temp == "":
    flag = True

print(flag)
##for i in range(n):
##    if len(string) == 2:
##        if a in string[i]:
##            if b in string[n-i]:
##                flag = True
##        elif c in string[i]:
##            if d in string[n-i]:
##                flag = True
##        elif e in string[i]:
##            if f in string[n-i]:
##                flag = True
##    elif len(string) == 4:
##        if a in string[i] and c in string[i]:
##            if b in string[n-i] and d in string[n-i]:
##                flag = True
##        elif a in string[i] and e in string[i]:
##            if b in string[n-i] and f in string[n-i]:
##                flag = True
##        elif c in string[i] and e in string[i]:
##            if d in string[n-i] and f in string[n-i]:
##                flag = True
##    elif len(string) == 6:
##        if a in string[i] and c in string[i] and e in string[i]:
##            if b in string[n-i] and d in string[n-i] and f in string[n-i]:
##                flag = True
##
##print(flag)
