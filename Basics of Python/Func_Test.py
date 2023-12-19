def getEven(li):
    ev = []
    for i in li:
        if i%2 == 0:
            ev.append(i)
    print(ev)
getEven([1, 2, 3, 4, 5])

def numUpdate(li):
    new = []
    for i in li:
        i += 20
        new.append(i)
    print(new)
numUpdate([10, 21, 32, 43])

def func(x):
    y = []
    for i in x:
        if i%2 == 0:
            y.append(i)
    return y

ans2 = filter(lambda x:x%2==0,[10, 21, 32, 43])
ans1 = func([10, 21, 32, 43])
ans3 = map(lambda x:x%2==0,[10, 21, 32, 43])
print(ans1)
print(list(ans2))
print(list(ans3))
