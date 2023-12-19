# lambda is a small anonymous function
# it can take any number of arguments but can have only one expression

x = lambda a,b: a+b
print(x(5, 10))

# lets use it in a function which doubles the value that we give

def func(x):
    return lambda a: a*x
double = func(2)
print(double(100))

li = [lambda arg=x: arg*10 for x in range(1, 5)]

for i in li:
    print(i())

