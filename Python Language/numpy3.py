# import numpy as np

# arr = np.array([1, 2, 3])

# for x in arr:
#   print(x,end=" ")



# import numpy as np

# arr = np.array([1, 2, 3, 4, 5])
# x = arr.copy()
# arr[0] = 42
# arr[1] = 56

# print(arr)
# print(x)



# import numpy as np

# arr = np.array([1, 2, 3, 4, 5])
# x = arr.view()
# arr[0] = 42
# arr[1] = 90

# print(arr)
# print(x)



# import numpy as np

# arr = np.array([1, 2, 3, 4, 5])

# x = arr.copy()
# y = arr.view()

# print(x.base)
# print(y.base)



import numpy as np

arr = np.array([1, 2, 3, 4], ndmin=5)

print(arr)
print('shape of array :', arr.shape)