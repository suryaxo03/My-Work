n = int(input("Enter the number of users: "))
for i in range(n):
    name = input("Enter your name: ")
    age = input("Enter your age: ")
    email = input("Enter your email: ")

    file = open("/home/surya/My programs/Task_Data", 'a')
    file.write(f'{name} {age} {email}\n')
    file.close()


    
