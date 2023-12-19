li = ['_', '_', '_', '_', '_', '_', '_', '_', '_']
n = len(li)
s = 3
i = 0
j = 0
l = 1
x = 'X'
o = 'O'
for i in range(n):
    if i%2 == 0:
        print("X's turn.")
        inp = int(input("Enter pos: "))
        if inp <= n and inp > 0 and li[inp-1] == '_':
            li[inp-1] = x
        else:
            print('Invalid input or Input already given!')
            continue
    elif i%2 != 0:
        print("O's turn.")
        inp = int(input("Enter pos: "))
        if inp <= n and inp > 0 and li[inp-1] == '_':
            li[inp-1] = o
        else:
            print('Invalid input or Input already given!')
            continue
    for j in range(s):
        print(li[s*j], li[s*j+1], li[s*j+2])    
    if (li[0]==li[1]==li[2]==x) or (li[3]==li[4]==li[5]==x) or (li[6]==li[7]==li[8]==x) or (li[0]==li[3]==li[6]==x) or (li[1]==li[4]==li[7]==x) or (li[2]==li[5]==li[8]==x) or (li[0]==li[4]==li[8]==x) or (li[2]==li[4]==li[6]==x):
        print("X is the Winner!")
        break
    elif (li[0]==li[1]==li[2]==o) or (li[3]==li[4]==li[5]==o) or (li[6]==li[7]==li[8]==o) or (li[0]==li[3]==li[6]==o) or (li[1]==li[4]==li[7]==o) or (li[2]==li[5]==li[8]==o) or (li[0]==li[4]==li[8]==o) or (li[2]==li[4]==li[6]==o):
        print("O is the Winner!")
        break
    elif '_' not in li:
        print("It's a draw!")
