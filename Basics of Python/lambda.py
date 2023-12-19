##def getEven(list_of_num):
##    ans_list = []
##    for i in list_of_num:
##        if (i%2 == 0):
##            ans_list.append(i)
##    return ans_list
##
##def numUpdate(list_of_num):
##    ans_list = []
##    for i in list_of_num:
##        i += 20
##        ans_list.append(i)
##    return ans_list
##        
##
lis = [10,13,56,20,33]
##ans = getEven(lis)
##ans2 = numUpdate(lis)
##print(ans)
##print(ans2)

##def fun(x):
##    return x%2 == 0

#ans1 = map(lambda x:x+"*","test")
ans2 = filter(lambda x:x%2==0,lis)

print(list(ans2))




