string = "In the night for the mother of god forgive this kid, for he is helpess"
toList = string.split(" ")
for count in toList:
    if count.startswith("for"):
        print(count)
