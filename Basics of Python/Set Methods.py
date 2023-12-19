set1 = {1, 3, 5, 7, 9, 11}

# add an element:
print('add()')
set1.add(13)
print(set1)
# duplicate elements added won't affect the set

# remove all the elements:
print('clear()')
set1.clear()
print(set1)

# get a copy of a set
print('copy()')
set1 = {1, 2, 3, 4, 5}
set2 = set1
copySet = set1.copy()
copySet.add('test from copy')
set2.add('test from set2')
print(set1)

# difference of two or more sets
print('difference()')
set1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
set2 = {2, 4, 6, 8, 10}
set3 = {1, 3, 5, 7, 9}
diffSet = set1.difference(set2)
print(diffSet)

# difference and return to the original set itself
print('difference_update()')
set1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
set2 = {2, 4, 6, 8, 10}
set1.difference_update(set2)
print(set1)

# remove a specified item
print('discard()')
set1 = {1, 2, 3, 4, 5}
set1.discard(5)
print(set1)

# common elements of two or more sets
print('intersection')
set1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
set2 = {2, 4, 6, 8, 10}
setInt = set1.intersection(set2)
print(setInt)

# find common elements from two or more sets and return to original set itself
print('intersection_update')
set1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
set2 = {2, 4, 6, 8, 10}
set1.intersection_update(set2)
print(set1)

# check if two sets are disjoint
print('isdisjoint()')
set1 = {1, 2, 3, 4, 5}
set2 = {'1', '2', '3'}
print(set1.isdisjoint(set2))

# check if another set contains this set
print('issubset()')
universalSet = set()
for i in range(100):
    universalSet.add(i)
set1 = {9, 11, 13, 15}
print(set1.issubset(universalSet))

# check if the set contains another set
print('issuperset()')
print(universalSet.issuperset(set1))

# remove a random element
print('pop()')
print(set1.pop())
print(set1)

# remove a specified element - raises an error if the element does not exist
print('remove()')
set1.remove(13)
print(set1)

# remove common elements of two sets and store in a new set
print('symmetric_difference()')
set1 = {1, 3, 5, 7, 9, 11, 13, 15}
set2 = {2, 3, 5, 7, 11, 13}
setDiff = set1.symmetric_difference(set2)
print(setDiff)

# remove common elements and store in the original set itself
print('symmetric_difference_update()')
set1.symmetric_difference_update(set2)
print(set1)

# add all elements of two or more sets
print('union()')
setUnion = set1.union(set2)
print(setUnion)

# add elements of another iterable to the existing set
# same as union_update()
print('update()')
set1 = {'d', 'e', 1, 3, 5, 7, 9}
li = {2, 4, 6, 8, 10, 'a', 'b'}
set1.update(li)
print(set1)
