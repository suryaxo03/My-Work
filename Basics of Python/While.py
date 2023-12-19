##i = 0
##while i < 6:
##    j = 0
##    while j < 6:
##        print("*", end=" ")
##        j += 1
##    print()
##    i += 1

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
