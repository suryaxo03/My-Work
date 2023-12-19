num1 = input("Enter the first number:" )
num2 = input("Enter the second number:" )
num3 = input("Enter the third number:" )
# Creating conditions to check the largest among three numbers
if(num1 > num2 and num1 > num3):
    print(f"{num1} is greater than {num2} and {num3}")
elif(num2 > num1 and num2 > num3):
    print(f"{num2} is greater than {num1} and {num3}")
else:
    print(f"{num3} is greater than {num1} and {num2}")
