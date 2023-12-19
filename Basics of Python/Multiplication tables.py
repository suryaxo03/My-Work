






num = int(input("Enter the multiplication table you want to display: "))
size = int(input("Enter the limit of the table: "))
for i in range(1, size+1):
    print(f"{i} X {num} = {i * num}")
