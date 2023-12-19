print(f"{'='*100}")

# Tables
num = int(input("Enter the multiplication table you want to display: "))
size = int(input("Enter the limit of the table: "))
for i in range(1, size+1):
    print(f"{i} X {num} = {i * num}")

print(f"{'='*100}")

# Prime number
num = int(input("Enter a number to check if it's Prime or not: "))
flag = 0
for i in range(2, num):
    if num % i == 0:
        flag = 1
if flag == 0:
    print(f"{num} is a Prime number.")
else:
    print(f"{num} is not a Prime number.")

print(f"{'='*100}")

# Factorial
num = int(input("Enter the number: "))
j = 1
for i in range(1, num+1):
    j *= i
    print(f"The factorial of {i} is {j}.")

print(f"{'='*100}")

# Fibonacci series
# 0 1 1 2 3 5 8 13 21 ...
num = 10
i = 0
j = 1
k = 0
print(i, j, end=" ")
for a in range(num):
    k = i + j
    i = j
    j = k
    print(f"{k}", end=" ")
    if k ==  55:
        break
print()
print(f"{'='*100}")

# Palindrome
Str = input("Enter a string: ")
i = 0
l = len(Str)
flag = 1
for i in range(l//2):
        if Str[i] != Str[l - i - 1]:
            flag = 0
if flag == 0:
    print(f"{Str} is not a Palindrome.")
else:
    print(f"{Str} is a Palindrome.")

print(f"{'='*100}")

# Sum of integers in a string
string = "a1b2c3dd4e5"
num = len(string)
total = 0
for i in range(0, num):
    if (string[i].isdigit()):
        str1 = str(string[i])
        for i in str1:
            total += int(i)
print(total)

print(f"{'='*100}")

# Complete the series
# 1 3 6 10 15 21 28 36
num = 10
i = 0
j = 0
for i in range(num):
    j += i
    print(k, end=" ")
    if k == 36:
        break
print()

print(f"{'='*100}")
