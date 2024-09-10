while(True):
    print('''
    1,  1
        2, 4
        3, 6, 9
        4, 8, 12, 16
    
    2. 1, 2, 3, 4, 5
    
          ''')
    print("-----------------------------------------------")
    print()

    query = int(input("Enter the problem Number: "))
    
    if(query==1):
        for i in range(1, 6):
            for j in range(i):
                print(i, end="")
            print()
    elif(query==2):
        a = 0
        for i in range(1, 6):
            for j in range(i):
                a += 1
                print(a, end="")
            print()