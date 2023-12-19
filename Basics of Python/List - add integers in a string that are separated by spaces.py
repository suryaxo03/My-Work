inp = input()
li = inp.split()
add = 0
for i in li:
    if i.isdigit():
        add += int(i)
print(li)
print(add)
