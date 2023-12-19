string = "surya"
loopCount = len(string)
count = 0
revString = ""
##for count in range(loopCount-1, -1, -1):
##    revString += string[count]
##print(revString)
while count < loopCount:
    revString += string[count]
    count += 1
print(revString)
