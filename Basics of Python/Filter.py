li = []
n = int(input("Enter len: "))
print(f"Enter {n} alphabets")
i = 0
while i < n:
    al = input(f"Enter alphabet {i+1}: ")
    if al.isalpha():
        li.append(al)
    else:
        print("Enter only alphabets!")
        continue
    i += 1
vo = filter(lambda i: i in ['a', 'e', 'i', 'o', 'u'], li)
print(list(vo))
