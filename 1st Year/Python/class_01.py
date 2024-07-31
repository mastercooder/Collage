while True:
    user = int (input("Enter the question number: "))

    if (user==1):
        print()
        print("This will show grater smaller")
        a = int(input("Enter number 1: "))
        b = int(input("Enter number 2: "))
        if a>b:
            print(f"{a} is Greater")
        else:
            print(f"{a} is Smaller")

    elif (user==2):
        a = int(input("Enter number 1: "))
        b = int(input("Enter number 2: "))

        if (a and b == 12):
            print("True")
        else:
            print("False")

    elif (user==3):
        a = int(input("Enter number 1: "))
        b = int(input("Enter number 2: "))
        
        c = a+b
        print(f"The sum of {a} and {b} the number is {c}")
