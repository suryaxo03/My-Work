a = ('a', 'b', 'c', 'd', 'e', 'f')
b = a.index('c')
c = a[:b]
d = a[b+1:]
print(c+d)
