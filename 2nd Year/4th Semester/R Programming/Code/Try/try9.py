import numpy as np
matrix_np = np.array([[1, 2], [3, 4]])
print("Matrix 1")
print(matrix_np)
print(type(matrix_np))  # Output: <class 'numpy.ndarray'>

print("Matrix 2")
mat2 = np.zeros((3, 3))
print(mat2)

print("Matrix 3")
low = 1
high = 10
mat3 = np.random.randint(low, high, size=(4, 5))
print(mat3)


print("\nFunction in Matrix\n")
m1 = np.array([[1, 2], [3, 4]])
print(m1)

print("Sum function of m1 = ", sum(m1))

m3 = np.square(m1)
print("Square m1 = ", m3)

print("Add Row & Colum")
m2 = np.array([[5, 6], [7, 8]])
new_row = np.array([[6, 7]])
m2_row = np.vstack([m2, new_row])
print(m2_row)
print()
new_col = np.array([[8], [9]])
m2_col = np.hstack([m2, new_col])
print(m2_col)
print()
print("Deleting")
print(m2_row)
print()
delete_a = np.delete(m2_row, 0, axis=1)
print(delete_a)

print()
print("3X3 Array")
array_3D = np.random.randint(1, 10, size=[2, 3, 4])
print(array_3D)
print()
slicsed_array = array_3D[0  , :, :]
print(slicsed_array)