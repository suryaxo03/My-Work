num = 10
i = 0
j = 0
k = 1
for i in range(0, num):
    j = i + j
    k = j + 1
    j = k
    print(k, end=" ")
    if k == 36:
        break
