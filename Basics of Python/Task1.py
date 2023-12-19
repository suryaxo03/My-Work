print(f"{'='*50}")
# *
# * *
# * * *
# * * * *
for i in range(4):
    for j in range(i+1):
        print("*", end=' ')
    print()
print(f"{'='*50}")
# 1
# 2 2
# 3 3 3
# 4 4 4 4
for i in range(4):
    for j in range(i+1):
        print(i+1, end=" ")
    print()
print(f"{'='*50}")
# 1
# 1 2
# 1 2 3
# 1 2 3 4
for i in range(4):
    for j in range(i+1):
        print(j+1, end=' ')
    print()
print(f"{'='*50}")
# 1
# 2 3
# 4 5 6
# 7 8 9 10
print(f"{'='*50}")
k = 0
for i in range(4):
    k += i
    for j in range(i+1):
        print(j+k+1, end=" ")
    print()
print(f"{'='*50}")
