


# WAP to calculate the factorial value of given integer number by using function ?
# WAP to calculate sun of N number by using function



# def factorial(num):
#     fact = 1
#     while(num>0):
#         fact *= num
#         num -= 1
#     print("The Factorial is = ", fact)
    

def sum(num):
    sum = 0
    for i in range(num+1):
        sum += i
        i += 1
    print("The Sum is = ", sum)
        
num = int(input("Enter the Number: "))
sum(num)
