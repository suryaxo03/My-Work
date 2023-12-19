li = ['_', '_', '_', '_', '_', '_', '_', '_', '_']
n = len(li)
s = 3
i = 0
j = 0
k = 0
x = 'X'
o = 'O'
for i in range(n):
    if i%2 == 0:
        print("X's turn.")
        inp = int(input("Enter pos: "))
        if inp <= n and inp > 0 and x not in li[inp-1] and o not in li[inp-1]:
            li[inp-1] = x
        else:
            print('Invalid input or Input already given!')
            continue
    elif i%2 != 0:
        print("O's turn.")
        inp = int(input("Enter pos: "))
        if inp <= n and inp > 0 and x not in li[inp-1] and o not in li[inp-1]:
            li[inp-1] = o
        else:
            print('Invalid input or Input already given!')
            continue
    for j in range(s):
        for k in range(s):
            print(li[s*j+k], end = " ")
        print()
    if (li[i] == li[i-1] == li[i-2] == x):
        print("X is the winner.")
        break
    elif (li[i] == li[i-1] == li[i-2] == o):
        print("O is the winner.")
        break
    print(li[i])
    i += 1

    
