# Q1. Write a Program to print Hello world n times ?
# Q2. Write a program to print the sum of n numbers ?
# Q3. Write a program to calculate factorial of a given value ?

while(True):
    print()
    query = int(input("Enter the question number: "))
    print()

    if(query==1):
        print("Q1. Write a Program to print Hello world n times ?\nAns.")
        print()
        num = int(input("Enter the Number: "))
        i = 1
        while(i<=num):
            print("Hello World!")
            i += 1
    elif(query==2):
        print("Q2. Write a program to print the sum of n numbers ?")
        print()
        num = int(input("Enter the Number: "))
        sum = 0
        i = 1
        while(i<=num):
            sum += i
            i+=1
        print("The Sum is", sum)
    elif(query==3):
        print("Q3. Write a program to calculate factorial of a given value ?")
        print()
        num = (int(input("Enter the Number: ")))
        fact = 1
        while(num>0):
            fact *= num
            num -= 1
        print("The Factorial is ", fact)