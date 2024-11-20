# Q. Write a python program to short a given sequence. string, list and topule

import random

def sort_string(s):
    sorted_string = ''.join(sorted(s))
    return sorted_string

def sort_list(lst):
    return sorted(lst)

def sort_touple(tpl):
    return sorted(tpl)

def main():
    n = int(input("Enter the Number: "))
    
    # Generate List, set and Touple with Random Module
    random_list = [random.randint(1, n) for _ in range(n)]
    string = 'tejesh'
    random_touple = tuple(random.randint(1, n) for _ in range(n))
    
    print("List = ", random_list)
    print("String = ", string)
    print("Tuple = ", random_touple)
    
    print()
    print("After Sorting")
    sortedString = sort_string(string)
    print(sortedString)

    print()
    sortedList = sort_list(random_list)
    print(sortedList)
    
    print()
    sortedTouple = sort_list(random_touple)
    print(sortedTouple)



if __name__ == "__main__":
    main()