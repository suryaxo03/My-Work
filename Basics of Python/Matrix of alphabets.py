# Using while loop
i = 0
k = 0
n = 5
while i < n:
    j = 0
    while j < n:
        k = 65+i*n+j
        if k > 90:
            break
        print(chr(k), end=" ")
        j += 1
    print()
    i += 1

print()

# Using for loop
for i in range(n):
    for j in range(n):
        k = 65+i*n+j
        if k > 90:
            break
        print(chr(k), end=" ")
    print()
