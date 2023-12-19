num = int(input("Enter a number to check if it's Prime or not: "))
flag = 0
for i in range(2, num):
    if num % i == 0:
        flag = 1
if flag == 0:
    print(f"{num} is a Prime number.")
else:
    print(f"{num} is not a Prime number.")
