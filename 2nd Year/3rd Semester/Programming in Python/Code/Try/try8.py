import random

def sort_string(s):
    sorted_string = ''.join(sorted(s))
    return sorted_string

def sort_list(lst):
    return sorted(lst)

def sort_tuple(tpl):
    return sorted(tpl)


def main():
    n = int(input("Enter the Number: "))
    random_String = "Tejesh"
    random_list = [random.randint(1, n) for _ in range(n)]
    random_tuple = tuple(random.randint(1, n) for _ in range(n))
    
    # random_String = "tejesh"
    # random_list = [4, 6, 6, 8, 3, 6]
    # random_tuple = (1, 6, 3, 6, 7, 3)
    
    print()
    print("Before Sorting")
    print("String = ", random_String)
    print("List = ", random_list)
    print("Tuple = ", random_tuple)
    
    print()
    print("After Sorting")
    sortedString = sort_string(random_String.lower())
    sortedList = sort_list(random_list)
    sortedTuple = sort_tuple(random_tuple)
    
    print("String = ", sortedString.capitalize())
    print("List = ", sortedList)
    print("Tuple = ", sortedTuple)
    
if __name__ == "__main__":
    main()
    