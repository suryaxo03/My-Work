from DH_CC import uc
filt = {"age": 20}
update = {"$set": {"age": 19}}
uc.update_one(filt, update)
filt = {"age": 18}
update = {"$set": {"age": 17}}
uc.update_one(filt, update)
