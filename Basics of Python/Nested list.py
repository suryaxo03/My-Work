li = [[1, 2], [3, 4]]
n = len(li)
a = 0
b = 0
c = 0
# [1, 2] li[0][0, 1]
# [3, 4] li[1][0, 1]

liv = [li[0][0]+li[1][0], li[0][1]+li[1][1]]
lic = [li[0][0]+li[1][1], li[0][1]+li[1][0]]

liv1 = []
lic1 = []
for i in range(n):
    for j in range(n):
        a += li[j][i]
    liv1.append(a)
    a = 0

for i in range(n):
    for j in range(n):
        if i == j:
            b += li[i][j]
        elif i + j == n-1:
            c += li[i][j]
lic1.extend([b, c])
print(lic1)
print(lic)
