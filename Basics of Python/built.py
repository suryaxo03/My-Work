from functools import reduce
lis = [1,2,4,3,5,7,8,9]
ans2 = map(lambda x:x+10,lis)#1,2,4,3,5,7,8,9
print(list(ans2))
fil2 = filter(lambda x:x%2==0,lis)#1,2,4,3,5,7,8,9
print(list(fil2))
out = reduce(lambda a,b:a+b,lis)#1,2,4,3,5,7,8,9
print(out)



