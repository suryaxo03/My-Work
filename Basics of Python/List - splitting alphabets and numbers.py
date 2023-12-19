inp = input()
li1 = []
li2 = []

for i in inp:
    if i.isalpha() and i not in li1:
        li1.append(i)
    elif i.isnumeric() and i not in li2:
        li2.append(i)
##    else:
##        continue
print(li1)
print(li2)
