while(True):
    print()
    print('''
    Q1. Example of for loop.
    Q2. Print with the for loop
        *
        **
        ***
        ****
          ''')
    
    query = ("Enter the Question Number: ")

    if(query==1):
        print("Q1. Example of For Loop.")
        for i in range(1, 5):
            print(i)
    elif(query==2):
        print("Q2. Print the certain pattern with for loop")
        n = int(input("Enter how much lines you want to print: "))
        for i in range(1, n):
            for j in range(i):
                print("*", end="")
            print()