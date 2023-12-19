li = [0, 7, 8, 4, 5, 6]
t = 7
idx = []
ans = []
n = len(li)
for i in range(n):
    for j in range(i+1, n):
        if li[i] + li[j] == t:
            idx = [i, j]
            ans = [li[i], li[j]]
            break
print(idx)
print(ans)
      
