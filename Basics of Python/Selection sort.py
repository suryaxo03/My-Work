arr = [24, 10, 35, 13, 14, 18, 39, 33, 57, 59, 52, 32, 43, 20, 26, 12, 58, 45, 49, 2, 41, 31, 56, 27, 5, 17, 55, 51, 16, 40, 6, 54, 7, 46, 3, 47, 42, 34, 37, 22, 29, 53, 1, 30, 9, 19, 15, 23, 50, 38, 28, 21, 48, 44, 11]
n = len(arr)
print(arr)
print(n)
for i in range(n):
    min_ind = i
    for j in range(i+1, n):
        if arr[min_ind] > arr[j]:
            min_ind = j
    arr[i], arr[min_ind] = arr[min_ind], arr[i]
print(arr)
##print([arr[0], arr[-1]])
