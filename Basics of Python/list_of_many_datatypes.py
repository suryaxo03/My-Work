##n = int(input("Enter no. of elements: "))
##li = []
##for i in range(n):
##    ip = input()
##    li.append(ip)
##co = 0
##flag = False
##li.sort()
##li1 = li.copy()
##while flag != True:
##    for i in li1:
##        if :
##            li1.pop()
##            co += 1
##        else:
##            co = 1
##    print(f"{li[i-1]} has repeated {co} times.")
##    co = 0
##    if li1==[]:
##        flag = True

##while i < len(li):
##    co = li.count(li[i])
##    if co>1:
##        print(f"{li[i]} has repeated {co} times")
##        continue
##    else:
##        print(f"{li[i]} has occured only once.")
##    i+=1
##i = 0
##j = 0
##for i in li:
##    co = li.count(i)
##    if co>1:
        
##print(type(1))
##print(li)
ip = input()
el = ip.split()
co = {}
for i in el:
    if i in co:
        co[i] += 1
    else:
        co[i] = 1
for i, re in co.items():
    print(f"{i} has repeated {re} times")
