aStr = 'elpoe'
i = 0
l = len(aStr)
flag = True
for i in range(l//2):
        if aStr[i] != aStr[l - i - 1]:
            flag = False
if flag == False:
    print(f"{aStr} is not a Palindrome.")
else:
    print(f"{aStr} is a Palindrome.")
