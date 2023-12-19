##04 
##13 14
##22 23 24
##31 32 33 34
##40 41 42 43 44 
n = 5
for i in range(n):
    for j in range(i+1):
        print(f"{i}{j-i+n-1}", end=" ")
    print()
print()
i = 0
while i < n:
    j = 0
    while j < i + 1:
        print(f"{i}{j-i+n-1}", end=" ")
        j += 1
    print()
    i += 1
