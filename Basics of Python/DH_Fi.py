from DH_CC import uc
dbData = uc.find_one()
##print(dbData)
##print(list(uc.find()))
allData = list(uc.find())
##for i in allData:
##    print(i.get("name"))

sortData = list(uc.find().sort("name"))
for i in sortData:
    print(i.get("name"))
