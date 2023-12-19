li = []
n = int(input("Enter len: "))
print(f"Enter {n} numbers: ")
for i in range(n):
    e = int(input(f"Enter number {i+1}: "))
    li.append(e)
sq = map(lambda i: i**2, li)
print(list(sq))
