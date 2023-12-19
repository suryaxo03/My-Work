from pymongo import MongoClient
client = MongoClient("mongodb://localhost:27017")
db = client.project1
coll = db.data
