##txt = """ABCD
##EFGH
##IGKL
##MNOP
##QRST
##UVWX
##YZ"""
### txt = "ABCD\nEFGH\nIGKL\nMNOP\nQRST\nUVWX\nYZ"
##print(txt.splitlines())

# Slicing
txt = "HelloNewWorld"
slicedString = txt[2:8]
print(slicedString)     # Slices the string at the 2nd index upto 7th index

# Slicing from the start
slicedFromStart = txt[:8]
print(slicedFromStart)      # Slices the string from start to 7th index

# Slicing to the end
slicedToEnd = txt[2:]
print(slicedToEnd)      # Slices the string from 2nd index till the end

# Slicing using negative indexing
slicedNegIndex =  txt[-8:-2]
print(slicedNegIndex)       # Slices the string from -8th index till -3nd index

# Slicing at some value of step size

steppedSlice = txt[0:13:2]
print(steppedSlice)

# Slicing for negative of step size

negStepSlice = txt[13::2]
print(negStepSlice)  # Reverses the string
