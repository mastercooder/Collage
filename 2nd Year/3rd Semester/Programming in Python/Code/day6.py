query = int(input("Enter the Number: "))

while(True):
    if(query==1):
        def displayHello():
            print("Hello")
        
        displayHello()
        print("hi")
        displayHello()
    elif(query==2):
        def displayHello(name):
            return "Hello " + name

        display = displayHello("Tejesh")
        print(display)
    elif(query==3):
        def add(a, b):
            c = a + b
            print(f"The sum is = {c}")

        a = int(input("Enter the 1st Number: "))
        b = int(input("Enter the 2st Number: "))

        add(a, b)