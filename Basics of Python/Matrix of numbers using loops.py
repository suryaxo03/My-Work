# Using while loop
i = 0
k = 0
n = int(input())
while i < n:
    j = 0
    while j < n:
        k = i*n+j+1
        if len(str(k)) < len(str(n**2)):
            noz = (len(str(n))-len(str(k))+1)*'0'
        else:
            noz = ""
        print(f"{noz}{k}", end=" ")
        j += 1
    print()
    i += 1
    
print()

#Using for loop
for i in range(n):
    for j in range(n):
        k = i*n+j+1
        if len(str(k)) < len(str(n**2)):
            noz = (len(str(n))-len(str(k))+1)*'0'
        else:
            noz = ""
        print(f"{noz}{k}", end=" ")
    print()

        
