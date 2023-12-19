getInput = ''
nameTuple = ()
count = 0
loopCount = 5
for count in range(loopCount):
    getInput = input(f"Enter name {count+1}: ")
    nameTuple += (getInput,)
print(nameTuple)
