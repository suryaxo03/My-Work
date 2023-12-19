##for i in range(5):
##    for j in range(5):
##        if i+j >= 4:
##            print(j+1, end=" ")
##        else:
##            print(" ", end=" ")
##    print()
##    1
##   12
##  123
## 1234
##12345

##i in range(5, 0)
##j in range(n+1, i)
##for i in range(5):
##    for j in range(5):
##        if i+j >= 4 and j == 4:
##            print(i+1, end=" ")
##        elif i+j >= 4 and j == 3 and i > 0:
##            print(i, end=" ")
##        elif i+j >= 4 and j == 2 and i > 1:
##            print(i-1, end=" ")
##        elif i+j >= 4 and j == 1 and i > 2:
##            print(i-2, end=" ")
##        elif i+j >= 4 and j == 0 and i > 3:
##            print(i-3, end=" ")
##        else:
##            print(" ", end=" ")
##    print()


##for i in range(5):
##    for j in range(5):
##        if i+j >= 4:
##            print(i-3+j, end=" ")
##        else:
##            print(" ", end=" ")
##    print()
##
##
##
##num = 9
##for i in range(num):
##    for j in range(num):
##        if i+j >= num-1:
##            print(i-(num-2)+j, end=" ")
##        else:
##            print(" ", end=" ")
##    print()
num = 9
for i in range(1, num+1):
    print("  "*(num-i), end="")
    for j in range(1, i+1):
        print(j, end=" ")
    print()
