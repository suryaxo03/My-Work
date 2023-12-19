li = ['_', '_', '_', '_', '_', '_', '_', '_', '_']
n = len(li)
s = 3
i = 0
j = 0
x = 'X'
while i < n:
    inp = int(input("Enter the position you want to place 'X': "))
    if inp <= n and inp > 0 and x not in li[inp-1]:
        li[inp-1] = x
    else:
        print('Invalid input or Input already given!')
        continue
    for j in range(s):
        print(li[s*j], li[s*j+1], li[s*j+2])
    i += 1
    
