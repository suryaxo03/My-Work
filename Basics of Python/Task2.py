print("="*50)
for i in range(5):
    for j in range(5):
        if i == j:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)
for i in range(5):
    for j in range(5):
        if i == 0 or i == 4 or j == 0 or j == 4:
            print("*", end=" ")
        else:
            print(' ', end=" ")
    print()
print("="*50)
for i in range(5):
    for j in range(5):
        if i == j or i + j == 4:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)
for i in range(5):
    for j in range(5):
        if i == j or i == 4-j or i == 0 or i == 4:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)
for i in range(21):
    for j in range(21):
        if i == j or i == 20-j or i == 0 or i == 20 or j == 0 or j == 20:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)
for i in range(9):
    for j in range(9):
        if i == j or i == 8-j or i == 0 or i == 8 or j == 0 or j == 8:
            print(i+1, end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)
for i in range(9):
    for j in range(9):
        if i == j or i == 8-j or i == 0 or i == 8 or j == 0 or j == 8:
            print(j+1, end=" ")
        else:
            print(" ", end=" ")
    print()

print("="*50)
for i in range(10):
    for j in range(10):
        if (i+3)%3 == 0:
            print("*", end=" ")
        elif (i+2)%3 == 0:
            print("=", end=" ")
        elif (i+1)%3 == 0:
            print("#", end=" ")
    print()
print("="*50)
for i in range(5):
    for j in range(5):
        if i >= 4 - j:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)

for i in range(5):
    for j in range(5 - i - 1):
        print("  ", end=" ")
    for j in range(2*i+1):
        print("* ", end =" ")
    print()
print("="*50)

for i in range(5):
    for j in range(5):
        if i >= 4 - j:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
print("="*50)
