li = [7,5,1,3,9]
n = len(li)-1
i = 0

##for i in range(n-1, -1, -1):
##    li.append(li[i])
##    li.pop(i)
##print(li)

while i < n:
    li[i], li[n] = li[n], li[i]
    i += 1
    n -= 1

##li = li[::-1]
print(li)
