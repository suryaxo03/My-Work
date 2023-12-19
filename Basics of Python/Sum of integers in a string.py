##string = '123456789'
##print(string[1].isdigit())



string = "a1b2c3dd4e5"
num = len(string)
total = 0
##for i in range(0, num):
##    if (string[i].isdigit()):
##        str1 = str(string[i])
##        for i in str1:
##            total += int(i)
##print(total)

for i in range(num):
    if ord(string[i]) >= 48 and ord(string[i]) <= 57:
        total += int(string[i])
print(total)
