import sys
small = 250
medium = 300
large = 450
print(f"Small: {small}\nMedium: {medium}\nLarge:{large}")
pizza_input = input("What size of pizza would you like to order?(Small = s, medium = m, large = l): ")
if pizza_input != 's' and pizza_input != 'm' and pizza_input != 'l':
    print("Invalid input!")
number = int(input("How many pizzas would you like to order?: "))
bill = 0
if pizza_input == 's':
    bill = small*number
elif pizza_input == 'm':
    bill = medium*number
elif pizza_input == 'l':
    bill = large*number
top_input = input("Would you like to have toppings?:(y/n) ")
if top_input == 'y':
    bill += bill/10
elif top_input == 'n':
    bill = bill
else:
    print("Invalid input!")
    sys.exit()
cheese_input = input("Would you like to have extra cheese?:(y/n) ")
if cheese_input == 'y':
    bill += bill*(5/100)
elif cheese_input == 'n':
    bill = bill
else:
    print("Invalid input!")
    sys.exit()
print(f"Your bill amount is {bill}.") 
