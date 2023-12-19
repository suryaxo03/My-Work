name = input("Enter your name : ")
flag = 0
while flag < 1:
    year = input("Enter your Birth year : ")
    if year.isdigit() == True:
        year = int(year)
        flag += 1
    else:
        print("Invalid input!")
##try:
##    birthYear = year
##    age = 2023-int(year)
##    if age>99:
##        raise Exception("yor age must be lesthen 99")
##    print(f"Hi {name} your {age} ({birthYear}) old")
##except ValueError as e:
##    print("Please check your input")
##except NameError as e:
##    print("you must define a veriable")
##except Exception as e:
##    print(e)
##else:
##    print('you have succesfuly added☺')
##finally:
##    print('programe completed....')
##    
##
##
