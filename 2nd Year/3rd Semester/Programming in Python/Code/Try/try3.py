# Q. Write a recursive function for the factorial of positive number.

def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)
    

num = int(input("Enter the Number: "))
result = factorial(num)
print("Facotial = ", result)