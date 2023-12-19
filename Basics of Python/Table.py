a = int(input("Enter eng marks: "))
b = int(input("Enter math marks: "))
c = int(input("Enter chem marks: "))
d = int(input("Enter phy marks: "))
e = int(input("Enter comp marks: "))
rt = "MARKS"
rn = "SUBJECT"
s1 = 'ENGLISH'
s2 = 'MATHEMATICS'
s3 = 'COMPUTER'
s4 = 'CHEMISTRY'
s5 = 'PHYSICS'
ed = "TOTAL"
mx = 13
mrk = mx - len(rt)
tp = mx - len(rn)
sub1 = mx - len(s1)
sub2 = mx - len(s2)
sub3 = mx - len(s3)
sub4 = mx - len(s4)
sub5 = mx - len(s5)
ed1 = mx - len(ed)
total = a+b+c+d+e
tot = total
print(f"╔{'═'*mx}╦{'═'*mx}╗")
print(f"║{rn}{' '*tp}║{' '*mrk}{rt}║")
print(f"╠{'═'*mx}╬{'═'*mx}╣")
print(f"║{s1}{' '*sub1}║{' '*(mx-len(str(a)))}{a}║")
print(f"║{s2}{' '*sub2}║{' '*(mx-len(str(b)))}{b}║")
print(f"║{s3}{' '*sub3}║{' '*(mx-len(str(c)))}{c}║")
print(f"║{s4}{' '*sub4}║{' '*(mx-len(str(d)))}{d}║")
print(f"║{s5}{' '*sub5}║{' '*(mx-len(str(a)))}{e}║")
print(f"║{ed}{' '*ed1}║{' '*(mx-len(str(tot)))}{tot}║")
print(f"╚{'═'*mx}╩{'═'*mx}╝")
