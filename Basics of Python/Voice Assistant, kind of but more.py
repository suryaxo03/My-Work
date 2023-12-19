count = 0
quest = input("Hi, how can I help?\n")
while count < 1:
    quest = input("Do you want anything else?(Yes/No)\n")
    if "n" in quest.lower():
        break
    else:
        quest
