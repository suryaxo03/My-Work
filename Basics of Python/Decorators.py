##def shout(text):
##    return text.upper()
##
##yell = shout("Hello")
##print(yell)

##def shout(text):
##    return text.upper()
##
##def whisper(text):
##    return text.lower()
##
##def greet(func):
##    print(func("Hello, there. I'm created by a function!"))
##greet(shout)
##greet(whisper)

def func1(a):
    def func2(b):
        a(b)
    return func2

##conc = func1('First Argument')
##print(conc(' Second Argument'))

@func1
def func3(x):
    print(x)
func3('ABCD')

