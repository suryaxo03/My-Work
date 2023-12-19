current_balance = 5000
option = 0
amount = 0
pin = int(input("Enter your pin: "))

if(pin != 1234):
    print("Invalid pin!")

else:

    option = int(input("Type 1 for balance, Type 2 for deposit, Type 3 for withdrawal: "))

    if option != 1 and option != 2 and option != 3:
        print("Invalid input!")

    elif option == 1:
        print(f"Your Current Balance is {current_balance}")

    else:
        amount = int(input("Enter amount: "))
        if amount % 100 == 0:
            if option == 2:
                current_balance += amount
                print(f"You've deposited {amount}. Your updated Balance is {current_balance}")

            elif option == 3:        
                if amount <= current_balance:
                    current_balance -= amount
                    print(f"You've withdrawn {amount}. Your updated balance is {current_balance}")
            
                else:
                    print("Insufficient Balance!")

        else:
            print("Error! Please enter valid amount!")

