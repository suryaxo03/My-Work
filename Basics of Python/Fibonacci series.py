# Fibonacci series
# 0 1 1 2 3 5 8 13 21 34 ...

num = 10
i = 0
j = 1
k = 0
print(i, j, end=" ")
for a in range(num):
    k = i + j
    i = j
    j = k
    print(f"{k}", end=" ")
    if k ==  55:
        break
print()
