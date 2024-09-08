print('''
Q1. Write a program to accept a number and print in reverse order ?
Q2. Write a program to check weather a number is a Palindrome or not ?
Q3. Write a program to check weather a number is a Armstrong Number ? 
HW
Q1. Write a Program to accept a number & print its Table ?
Q2. Write a Program to Calculate the squate root of any Number ?
''')


while(True):
    query = int(input("Enter the Question Number: "))
    print()
    
    if(query==1):
        print("Q1. Write a program to accept a number and print in reverse order ?")
        print()
        num = int(input("Enter the Number: "))
        og = num
        reverse = 0
        while(num>0):
            digit = num % 10
            reverse = reverse* 10 + digit
            num = num // 10
        print("Orignal Number: ", og)
        print("Reverse Number: ", reverse)
    elif(query==2):
        print("Q2. Write a program to check weather a program is a Palindrome or not ?")
        print()
        num = int(input("Enter the Number: "))
        og = num
        reverse = 0
        while(num>0):
            digit = num % 10
            reverse = reverse * 10 + digit
            num = num // 10
        
        if(og == reverse):
            print("It is a Palindrome")
        else:
            print("It is Not a Palindrome")
    elif(query==3):
        print("Q3. Write a program to check weather a number is a Armstrong Number ?")
        print()
        num = int(input("Enter the Number: "))
        og = num
        reverse = 0
        while(num>0):
            digit = num % 10
            reverse = reverse * 10 + (digit*digit*digit)
            num = num // 10
            
        if(num==reverse):
            print("It is an Armstrong number")
        else:
            print("It is not an Armstrong Number")
    elif(query==4):
        print("Home Work")
        print("Q1. Write a Program to accept a number & print its Table ?")
        print()
        num = int(input("Enter the Number: "))
        i = 1
        while(i<=10):
            print(f"{i} X {num} = {i*num}")
            i += 1
    elif(query==5):
        print("Home Work")
        print("Q2. Write a Program to Calculate the squate root of any Number ?")
        print()
        num = int(input("Enter the Number: "))
        num = num*num
        print("The Square is ", num)
        