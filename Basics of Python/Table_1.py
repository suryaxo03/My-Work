amt = int(input("Enter your amount: "))

k_2 = x // 2000
rem = x % 2000
c_5 = rem // 500
rem = rem % 500
c_2 = rem // 200
rem = rem % 200
c_1 = rem // 100
rem = rem % 100
d_5 = rem // 50
rem = rem % 50
d_2 = rem // 20
rem = rem % 20
d_1 = rem // 10
rem = rem % 10
i_5 = rem // 5
rem = rem % 5
i_2 = rem // 2
rem = rem % 2
i_1 = rem

l = 8
a = l - len("2000")
b = l - len("500")
c = l - len("200")
d = l - len("100")
e = l - len("50")
f = l - len("20")
g = l - len("10")
h = l - len("5")
i = l - len("2")
j = l - len("1")
print(f"╔{'═'*l}╦{'═'*l}╗")
print(f"║2000{' '*a}║{' '*(l - len(str(k_2)))}{k_2}║")
print(f"║500{' '*b}║{' '*(l - len(str(c_5)))}{c_5}║")
print(f"║200{' '*c}║{' '*(l - len(str(c_2)))}{c_2}║")
print(f"║100{' '*d}║{' '*(l - len(str(c_1)))}{c_1}║")
print(f"║50{' '*e}║{' '*(l - len(str(d_5)))}{d_5}║")
print(f"║20{' '*f}║{' '*(l - len(str(d_2)))}{d_2}║")
print(f"║10{' '*g}║{' '*(l - len(str(d_1)))}{d_1}║")
print(f"║5{' '*h}║{' '*(l - len(str(i_5)))}{i_5}║")
print(f"║2{' '*i}║{' '*(l - len(str(i_2)))}{i_2}║")
print(f"║1{' '*j}║{' '*(l - len(str(i_1)))}{i_1}║")
print(f"╚{'═'*l}╩{'═'*l}╝")
