# Tuples
aTuple = ('a', 'b', 'c', 'd', 'e')
print(aTuple)
# Indexing
print(aTuple[2])    # Prints the element at 2nd index
# The elements are unchangeable, for example
##aTuple[2] = 'f'
##print(aTuple)   # Throws an error
# Tuple length
print(len(aTuple))  # Prints the number of elements in the tuple
# NOTE
a = ("python")
print(type(a))  # class string
# To get a single element tuple, we need to declare as follows
a = ("python",)
print(type(a))  # class tuple
# A tuple can be declared without paranthesis also, for example
aTuple = 'a', 'b', 'c', 'd', 'e'
print(type(a))
# An empty tuple can be declared as follows
emptyTuple = ()
# Tuples support negative indexing also
print(aTuple[-3])   # Prints the third last element
# We can also print a range of elements in tuple
print(aTuple[1:4])
# Tuples are immutable yet we can change the values by converting it into a list
aTuple = ('a', 2, 'c', 4, 'e', 6)
toList = list(aTuple)
toList[1] = 'b'
aTuple = tuple(toList)
print(toList)
# add elements 
aTuple = ('a', 'b', 'c', 'd', 'e')
toList = list(aTuple)
toList.append('f')
aTuple = tuple(toList)
print(aTuple)

addTuple = ('g', 'h',)
aTuple += addTuple
print(aTuple)
# remove elements
toList = list(aTuple)
toList.remove('h')
aTuple = tuple(toList)
print(aTuple)
# delete the entire tuple
del aTuple
##print(aTuple)   # Throws an error because the tuple does not exist
# Unpacking a tuple
aTuple = "surya", 19, "b tech", "eee"
name, age, grad, dept = aTuple
print(name)
print(age)
print(grad)
print(dept)
# Using asterisk
aTuple = 'surya', 19, 'b tech', 'eee', 'python', 'c', 'c++', 'matlab', 'coding'
name, age, grad, dept, *skills, interests = aTuple
print(skills)
print(interests)
# Loop through a tuple
aTuple = 'a', 'b', 'c', 'd', 'e', 'f'
for i in aTuple:
    print(i)

for i in range(len(aTuple)):
    print(aTuple[i])
# Joining two tuples
tuple1 = 1, 2, 3, 4
tuple2 = 5, 6, 7, 8
print(tuple1 + tuple2)
#  Multiply tuple elements
aTuple = 1, 2, 3, 4
print(aTuple*5)
# Tuple methods
# Tuple only supports two methods
# count()
aTuple = ("python", "html", "css", "javascript", "c++")
print(aTuple.count('a'))
# index()
print(aTuple.index("css"))
