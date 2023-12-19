arr = [5, 2, 8, 12, 1]

for i in range(1, len(arr)):
    key = arr[i]
    j = i-1

    while j >= 0 and key < arr[j]:
        arr[j+1] = arr[j]
        j -= 1
    arr[j+1] = key
    print(arr)
print([arr[0], arr[-1]])
