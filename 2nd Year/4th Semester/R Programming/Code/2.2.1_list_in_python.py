my_list = [1, 2, 3, 4, 5]
print(my_list)

char_list = ["Orange", "Mango", "Banana", "Apple"]
print(char_list )


# ---------------------List Manupalation--------------------
print()
print("List Manupalation")
print("Append")
my_list.append(6)
print(my_list)
my_list.remove(1)
print("Removing 1 \n", my_list)
my_list.insert(0, 1)
print("Insert 1 at 1st Place\n", my_list)


# -------------------List Operations--------------------
print()
print("List Operations")
list2 = [2, 4, 6, 8]
square = [x**2 for x in list2]
print("Square :- \n", square)

print("Lambda Function to make cubes")
list3 = [2, 4, 6, 8]
list_cube = list(map(lambda x: x**3, list3))
print(list_cube)

print()
print("Rececursive List")

def recursive_sum(value):
    if not value:
        return 0
    return value[0] + recursive_sum(value[1:])

num = [1, 2, 3, 4]
print(recursive_sum(num))