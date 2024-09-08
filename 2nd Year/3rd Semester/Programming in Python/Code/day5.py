user = int(input("Enter how much lines you want to print: "))
for i in range(1, user):
    for j in range(i):
        print("*", end="")
    print()