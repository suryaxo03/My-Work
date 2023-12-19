from pymongo import MongoClient

client = MongoClient("*link*")
#create a database
db = client.dbname
#create a collection
userCollection = db.myUser
#create a new file for each

#insert one data
from Data handling import userCollection
data = {"name": "Surya", "age": 19}
##userCollection.insert_one(data)

#insert many data at a time
data1 = [
    {"name": "Surya", "age": 19},
    {"name": "Sur", "age": 20},
    {"name": "Srya", "age": 21},
    {"name": "Sura", "age": 22},
    {"name": "ya", "age": 23},
    ]
userCollection.insert_many(data1)

#finding a data
from Data handling import userCollection

dbData = userCollection.find_one()
#returns the first data
print(dbData)

#filtering a specified data
print(userCollection.find_one("age": 22))
#all data
allData = list(userCollection.find())
for i in allData:
      print(i)
#to get only names from the db
      print(i.get("name"))
      break
#find and sort all the data
data2 = list(userCollection.find().sort("age" or "name"))
#limit the number of data
data2 = list(userCollection.find().limit(3))

#update a data
from Data handling import userCollection
fi = {"age":19}
up = {"$set":{"age": 20}}
uc.update_many(fi, up) #we can also use update_one()

uc.update_many({}, {"$unset":{"email": -1}})

#delete a data
from Data handling import userCollection

#delete the first data
userCollection.delete_one({})
userCollection.delete_many({})
