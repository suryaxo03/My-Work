def myLoop(start, end):
    print(f'Looping from {start} to {end}')
    flag = start < end
    var = 1
    if flag == False:
        var = -1
    for i in range(start, end, var):
        print(i)
myLoop(50, 40)
myLoop(40, 50)

def func():
	print('Hello World')
	print('This is python')

print('Test 1')

print('Test 2')

print('Test 3')
