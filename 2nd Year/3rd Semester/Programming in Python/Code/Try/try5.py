# Q. Write a recursive function to display prime number from 2 to n

def is_prime(num, divisor = 2):
    if num<2:
        return False
    if divisor * divisor > num:
        return True
    if num % divisor == 0:
        return False
    return is_prime(num, divisor + 1)

def display_prime(n):
    if n<2:
        return
    for i in range(2, n+1):
        if is_prime(i):
            print(f"{i} is a Prime Number")
            
n = int(input("Enter the Number: "))
display_prime(n)