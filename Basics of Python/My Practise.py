##year = int(input("Enter a year: "))
##if year % 4 == 0:
##    if year % 100 != 0:
##        print(f"{year} is a leap year")
##    elif year % 100 == 0:
##        if year % 400 == 0:
##            print(f"{year} is a leap year")
##        else:
##            print(f"{year} is not a leap year")
##    else:
##        print(f"{year} is not a leap year")
##else:
##        print(f"{year} is not a leap year")

##if year % 4 == 0 and year % 100 != 0:
##        flag
##elif year % 100 == 0 and year % 400 == 0:
##        flag
##else:
##    flag = False
##    print(f"{year} is not a leap year.")
##
##if flag:
##    print(f"{year} is a leap year.")
    

##x = input("for which shape u want to area?(t, s, r, c): ")
##
##if x == 't':
##    b = int(input("enter base: "))
##    h = int(input("enter height: "))
##    area = 0.5*b*h
##    print(f"The area is {area} sq.units.")
##    
##elif x == 's':
##    a = int(input("enter side: "))
##    area = a**2
##    print(f"The area is {area} sq.units.")
##    
##elif x == 'r':
##    l = int(input("enter length: "))
##    b = int(input("enter breadth: "))
##    area = l*b
##    print(f"The area is {area} sq.units.")
##    
##elif x == 'c':
##    r = int(input("enter radius: "))
##    area = 3.14*(r**2)
##    print(f"The area is {area} sq.units.")
##    
##else:
##    print("Invalid input")

##a, b = 1, 20
##
##for num in range(a, b+1):
##    if num % 2 == 0:
##        print(num, end=" ")

##x = "surya"
##
##print(x.endswith("rya"))


##num = int(input("Enter an integer: "))
##if num > 0:
##    print(f"{num} is positive.")
##elif num < 0:
##    print(f"{num} is negative.")
##elif num == 0:
##    print(f"[num} is zero.")


##s1 = input("Enter length of first side: ")
##s2 = input("Enter length of second side: ")
##s3 = input("Enter length of third side: ")
##
##if s1 == s2 == s3:
##    print("It is an equilateral triangle.")
##elif s1 == s2 or s2 == s3 or s3 == s1:
##    print("It is an isosceles triangle.")
##else:
##    print("It is a scalene triangle.")



##x = int(input("Enter a number to find its factorial: "))
##i = 0
##result = 1
##for i in range(1, num+1):
##    result = result * i
##print(f"{num}! is {factorial}.")

    
##loopCount = 20
##num = int(input("Enter the number you want to print the multipliction table: "))
##product = 0
##count = 0
##
##print(f"The multiplication for the {num} table upto {loopCount}:")
##
##for count in range(1, loopCount+1):
##    product = count*num
##    print(f"{count} * {num} = {product}")

##num = 100
##count = 0
##Sum = 0
##for count in range(1, num+1):
##    Sum = Sum + count
##
##print(f"The sum of first {num} numbers is {Sum}")

##num = 4
##count = 0
##
##for count in range(num):
##    print("* "*num)


##x = 'abcde9087654'
##y = 0
##z = 0
##n = len(x)
##for i in range(n):
##    if x[i].isalpha():
##        y = y+1
##    elif x[i].isdigit():
##        z = z+1
##print(y)
##print(z)


##x = 'a1b3c9d65'
##n = len(x)
##s = 0
##for i in range(n):
##    if x[i].isdigit():
##        s = s + int(x[i])
##print(s)

##x = 'poll'
##li = ['a', 'e', 'i', 'o', 'u']
##y = ''
##for i in x:
##    if i in li:
##        i = '*'
##    y += i
##print(y)
##x = int(input())
##y = int(input())
##for i in range(y, x-1, -1):
##    print(i, end = ' ')

##BBROYGBVGW
##bl = 0
##br = 1
##re = 2
##or = 3
##ye = 4
##gr = 5
##bl = 6
##vi = 7
##grey = 8
##white = 9
##go = +/-5%
##si = +/-10%
##nil = +/-20%

num = int(input("Enter the number of bands in the resistor including tolereance band: "))
cc = {'black': 0, 'brown': 1, 'red': 2, 'orange': 3, 'yellow': 4, 'green': 5,
      'blue': 6, 'violet': 7, 'grey': 8, 'white': 9, 'gold': 0.05, 'silver': 0.1, 'none': 0.2}
i = 0
res = 0
tol = 0
while(i < num):
    col = input(f"Enter the colour of band {i+1}: ")
    val = cc.get(col.lower())
    if i < num-2:
        if col not in cc.keys():
            print("Invalid input! Try again!")
            continue
        else:
            res += val*(10**(num-i-3))
    else:
        if i == num-2:
            res *= 10**val

        if i == num-1:
            tol = val*res
    i += 1
print(f"""The value of resistance of the given colour code is {res}Ω but can range between {res-tol}Ω to {res+tol}Ω.""")

    
        
