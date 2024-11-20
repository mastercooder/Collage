# Q. Write a python program that write a seres of random number to a file from 1 to n and display.

import random

def write_in_file(n, fileName):
    with open(fileName, 'w') as file:
        for _ in range(n):
            random_number = random.randint(1, n)
            file.write(str(random_number) + '\n')

def read_from_file(fileName):
    with open(fileName, 'r') as file:
        for line in file:
            print(line.strip())

def main():
    n = int(input("Enter the Number: "))
    fileName = 'try6.txt'
    write_in_file(n, fileName)
    read_from_file(fileName)

if __name__ == "__main__":
    main()