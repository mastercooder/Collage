while(True):
    print()
    print('''
    Q1. Sum of Two Numbers ?
    Q2. Swapping of two numbers ?
    Q3. Write a program for Area of circle & circumference ?
    Q4. If Statement Example ?
    Q5. Write a program to accept a numb er and check the numberer is even or odd ?
    Q6. Write a program to enter two number and out the maximum number and minimum number between them ?
    Q7. Write a program to accept 3 number and find out the largest number of them ?
    Q8. Write a program to accept a number and check the number is positive or negative or neutral ?
    ''')

    query = int(input("Enter the Question Number: "))

    if(query==1):
        print("Q1. Sum of Two Numbers?")
        num1 = 10
        num2 = 20
        sum = num1 + num2
        print("Sum of two numbers is = ", sum)
    elif(query==2):
        user = int("Enter the Method number: ")
        if(user==1):
            # Method 1
            num1 = input("Enter the First number: ")
            num2 = input("Enter the Second Number: ")
            num3 = num1
            num1 = num2
            print(num1, num2)
        elif(user==2):
            # Method 2
            a = input("Enter the First number: ")
            b = input("Enter the Second Number: ")
            print("Number 1 = ", a)
            print("Number 2 = ", b)
            temp = a
            a = b
            b = temp
            print("After Swapping")
            print("Number 1 = ", a)
            print("Number 2 = ", b)
    elif(query==3):
        print("Q3. Write a program for Area of circle & circumference ?")
        p = 3.14
        r = int(input("Enter the Radius: "))
        area = p * r * r
        para = 2 * p * r
        print("The Area of Circle: ", area)
        print("The Circumference of Circle: ", para)
    elif(query==4):
        print("Q4. If Statement Example ?")
        user = int(input("Enter the Example No: "))
        if(user==1):
            a = 10
            if(a<100):
                print("It is a true case")
            print("Have a nice program")
        elif(user==2):
            a = 10
            if(a<10):
                print("It is a ture Condition")
            print("Having a nice program")
    elif(query==5):
        print("Q5. Write a program to accept a number er and check the number is even or odd ?")
        num = int(input("ENter the number: "))
        if(num%2==0):
            print("Number is Even")
        else:
            print("Number is odd")
    elif(query==6):
        print("Q6. Write a program to enter two number and out the maximum number and minimum number between them ?")
        a = int(input("Enter the First Number: "))
        b = int(input("Enter the second number: "))
        if(a>b):
            print("A is Maximum")
        else:
            print("B is Minimum")
            
        if(a<b):
            print("A is Minimum")
        else:
            print("B is Minimum")
    elif(query==7):
        print("Q7. Write a program to accept 3 number and find out the largest number of them ?")
        a = int(input("Enter the First Number: "))
        b = int(input("Enter the Second Number: "))
        c = int(input("Enter the Third Number: "))
        if(a>b and a>c):
            print("A is Bigger")
        elif(b>a and b>c):
            print("B is Bigger")
        elif(c>a and c>b):
            print("C is Bigger")
        else:
            print("Some numbers are Equal")
    elif(query==8):
        print("Q8. Write a program to accept a number and check the number is positive or negative or neural ?")
        num = int(input("Enter the Number: "))
        if(num<0):
            print("The Number is Negative")
        elif(num==0):
            print("The Number is Neutral")
        else:
            print("The Number is Positive")