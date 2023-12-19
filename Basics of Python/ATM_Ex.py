bal = 5000
print("Welcome to SS bank!")
flag = 0
flag1 = 0
flag2 = 0
while flag < 1:
    pin = input("Please enter your PIN: ")
    try:
        if int(pin) != 1234:
            raise Exception("Incorrect PIN! Try Again!")
    except ValueError:
        print("Enter only numbers!")
    except Exception as a:
        print(a)
    else:
        flag += 1
flag = 0
while flag < 1:
    opt = input("Enter 1 for bal, 2 for dep, 3 for wd: ")
    try:
        option = int(opt)
        if option not in [1,2,3]:
            raise Exception("Invalid input!")
    except ValueError:
        print("Enter only numbers!")
    except Exception as b:
        print(b)
    else:
        if option == 1:
            print(f"Your balance is {bal}")
        else:
            while flag1 < 1:
                amt = input("Enter amount: ")
                try:
                    amount = int(amt)
                    if (option == 2 and amount < 500 or amount % 100 != 0):
                        raise Exception("You can dep only more than 500 and in 100s or 200s or 500s!")
                    elif(option == 3 and amount < 500 or amount % 100 != 0 or amount > bal):
                        raise Exception("You can wd only more than 500 and in 100s or 200s or 500s, or insufficient balance!")
                except ValueError:
                    print("Enter only numbers!")
                except Exception as c:
                    print(c)
                else:
                    if option == 2:
                        bal += amount
                        print(f"You've deposited {amount}, you balance is {bal}.")
                    elif option == 3:
                        bal -= amount
                        print(f"You've withdrawn {amount}, you balance is {bal}.")
                    flag1 += 1
        flag += 1
    
