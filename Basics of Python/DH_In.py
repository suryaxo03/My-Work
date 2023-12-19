from DH_CC import uc
data = {'name': 'Surya', 'age': 20}
uc.insert_one(data)
dataset = [
    {'name': 'Surya', 'age': 20},
    {'name': 'Saadhitya', 'age': 18}
    ]
uc.insert_many(dataset)
