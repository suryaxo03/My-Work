aDict = {'name': 'python', 'type': 'versatile', 'year': 2000}

# remove all elements in the dictionary

aDict.clear()
print(aDict)

# return a copy of the dictionary

dict1 = {'name': 'python', 'difficulty': 'easy', 'year': 1991}
dict2 = dict1.copy()

# form a dictionary with specified keys and specified values

keys = ('key1', 'key2', 'key3')
elements = 'py'
aDict = dict.fromkeys(keys, elements)
print(aDict)

# get an element using its key

aDict = {'name': 'java', 'difficulty': 'medium', 'year': 1995}
print(aDict.get('name'))

# if there is no value in the key calue pair, it will return None, and hence we can use this instead just using dict[key]
print(aDict.get('founder'))
# get a list of tuple of key value pair from the dictionary

items = aDict.items()
print(items)

# get a list of keys from the dictionary

keys = aDict.keys()
print(keys)

# remove an element with the specified key

aDict = {'name': 'java', 'difficulty': 'medium', 'year': 1995, 'test': 'python'}
aDict.pop('test')
print(aDict)

# remove the last inserted key value pair

aDict = {'name': 'java', 'difficulty': 'medium', 'year': 1995, 'test': 'python'}
aDict.popitem()
print(aDict)

# return the value of the item with the specified key or add a new key value pair

aDict = {'name': 'java', 'difficulty': 'medium', 'year': 1995}
aDict.setdefault('name1', 'java_test')
print(aDict)

# insert a specified item to the dictionary, the key value pair can be any iterable

aDict.update({'logo': 'cup of coffee'})
print(aDict)

# return a list of values of the dictionary

print(aDict.values())
