n = int(input("Enter an integer to reverse: "))
count = 0
result = 0
result1 = 0
loopCount = len(str(n))
while count < loopCount:
    remainder = n % 10
    n //= 10
    result = result*10 + remainder  # ChatGPT Logic
    result1 += remainder*(10**(loopCount-count-1))  # My Logic
    count += 1
print(result)
print(result1)
print(type(result))
print(type(result1))
