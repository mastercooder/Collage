# Q. Write a recursive function to print fubanacci number to n numbers

n = int(input("Enter the Number: "))

def fibonacci(num):
    print(num)
    if num <= 0:
        return 0
    elif num == 1:
        return 1
    else:
        return fibonacci(num - 1) + fibonacci(num - 2)  # Recursive case
    


for i in range(n + 1):
    print(f"F({i}) = {fibonacci(i)}")
