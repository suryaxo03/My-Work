st = "ab3bj38dk93"
num = ""
string = ""

for i in st:
    if i.isalpha():
        string += i
    elif i.isdigit():
        num += i
print(string)
print(num)
