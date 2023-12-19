num = int(input("Enter the number: "))
j = 1
for i in range(1, num+1):
    j *= i
    print(f"The factorial of {i} is {j}.")
