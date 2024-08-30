while(True):
    query = int(input("Enter the Number: "))

    if(query==1):
        count = 0
        while(count<=10):
            if(count==5):
                break
            print(count)
            count += 1
    elif(query==2):
        count = 0
        while(count<=10):
            count += 1
            if(count%2==0):
                continue
            print(count)