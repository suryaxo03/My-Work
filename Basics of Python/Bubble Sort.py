arr = [5, 2, 8, 12, 1]
n = len(arr)
print(arr)
for i in range(n-1):
    print(f"{i+1} pass:")
    for j in range(n-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]
    print(arr)
