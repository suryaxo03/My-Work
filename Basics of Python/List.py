# list
List = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
# Printing a list
print(List)
# Getting its length
print(len(List))
# Calling an item by its index
print(List[1])
print(List[-4])
# Calling a range of items(similar to slicing of strings)
print(List[1:5])
print(List[:6])
print(List[3:])
print(List[-5:-1])
print(List[::2])
print(List[::-1])
# Change an item value
List[1] = 'B'
print(List)
# Changing a range of item values
List[2:5] = ['C', 'D', 'E']
print(List)
# Inserting an item value at a specified index
List.insert(3, 'd')
print(List)
# Append items, i.e add an item to the end of the list
List.append('i')
print(List)
# Extend items, i.e append a list of items to another list
List.extend(['j', 'k', 'l', 'm'])
print(List)
# We can use extend to append any iterable object
List.extend(('m', 'n', 'o'))
print(List)
List.extend({'p', 'q', 'r'})
print(List)
# Remove specified item
List.remove('d')
print(List)
# Remove specified index
List.pop(-1)
print(List)
# if index not specified removes the last item
List.pop()
print(List)
# Using del to remove items
del List[-1]
# print(List)  # Throws an error as the list does not exist anymore
# To delete the entire list
del List
# To clear the elements in the list
List = ['a', 'b', 'c', 'd', 'f']
List.clear()
print(List)
# Looping through a list
List = ['a' 'b', 'c', 'd', 'e', 'f', 'g']
for i in List:
    print(i)
# Looping through the index numbers
for i in range(len(List)):
    print(List[i])
# Looping through the list using while loop
i = 0
while i < len(List):
    print(List[i])
    i += 1
# Looping using list comprehension
[print i for i in List]
# List comprehension
List = ['a', 'b', 'c', 'd', 'e']
# Instead of looping using a for or a while loop, we can simply loop it as:
newList = [i for i in List]
print(newList)
# We can just add any valid expressions and give certain conditions too
newList = [i for i in fruits if i != 'a']
print(newList)

newList = [i for i in range(6)]
print(newList)

newList = [i for i in range(10) if x < 5]
print(newList)

newList = [i.upper() for i in List]
print(newList)
# We can set all the values of the list to some other value
newList = ['0' for i in List]
print(newList)
# It can also be used to manipulate the specified values
newList = [i if i != 'c' else '0' for i in List]
print(newList)
# Sort function - used to arrange in ascending order alphanumerically
list1 = [96, 69, 45, 35, 6, 9, 34]
print(list1.sort())
# It can be used to arrange in descending order also by:
list2 = ['p', 'l', 'a', 'd', 'v', 'f', 'c']
print(list2.sort(reverse = True))
# To make the sort function case insensitive (as it is case sensitive)
list3 = ['P', 'l', 'A', 'd', 'V', 'f', 'C']
caseInsList = list3.sort(key = str.lower())
print(caseInsList)
# Reversing the order of the list
List.reverse()
print(List)
# Copying a list
List = ['a' , , 'c', 4, 'e', 6]
copiedList = List.copy()
print(copiedList)

copiedList1 = list(List)
print(copiedList1)
# Joining lists
list1 = ['a', 'b', 'c']
list2 = [1, 2, 3]
newList1 = list1 + list2
print(newList1)

for i in list2:
    newList2 = list1.append(i)
print(newList2)

newList3 = list1.extend(list2)
print(newList)
# List methods
# append()
aList = ['a', 'b', 'c', 'd', 'e']
aList.append('f')
print(aList)
# clear()
aList.clear()
print(aList)
# copy()
newList = aList.copy()
print(newList)
# count()
print(aList.count('a'))
# extend() - add elements of any iterable to the end of existing one
newList = aList.extend(['f', 'g', 'h'])
print(newList)
