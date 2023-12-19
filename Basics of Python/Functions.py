# Creating a function:

def func():
    print("This is a function statement.")
func()      # Calling a function

# Arguments - factors through which information can be passed

def func1(arg):
    print(arg + '.py')
func1('Functions')
func1('Reverse a list')

# Parameters and Arguments are technically same, the main difference s that
# Arguments is the value that is sent to the function when it is called, and
# parameters are the variables that are listed inside the paranthesis

# We must call the number of arguments that is mentioned in the function by default

def func2(arg1, arg2, arg3):
    print(arg1 + ' ' + arg2 + ' ' + arg3)
func2('Abel', 'The Weeknd', 'Tesfaye')

# If the number of arguments are unknown, aka arbitrary arguments, we can add a * before the parameter

def func3(*fruits):
    print(f"The available fruits are {fruits}")
    print(f"The available fruits right now are {fruits[1]}")
func3('Mango', 'Apple', 'Lemon')

# You can also send arguments with the key = value syntax
# This way the order of the arguments doesn't matter

def func4(arg2, arg1, arg3):
    print(f'The seasonal fruit is {arg1}')
func4(arg1 = 'Mango', arg2 = 'Apple', arg3 = 'Lemon')

# If the numer of keyword arguments are unknown, aka arbitrary keyword arguments, we can add a ** before the parameter
def func4(**fruit):
    print(f"The seasonal fruit is {fruit['sFruit']}")
func4(sFruit = 'Mango', fruit1 = 'Apple')

# Assigning a default parameter value:
def func5(car = "Bugatti"):
    print(f"The best car is {car}")
func5("Koenigsegg")

# Return statement 
