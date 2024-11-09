a = 964
b = 57
c = 399

largest = a if(a>=b and a>=c) else(b if(b>=c) else c)
print(largest)

# if(a>=b and a>=c):
#     print("A is bigger")
# else:
#     print("B is bigger")
#     if(b>=c):
#         print("B is bigger")
#     else:
#         print("C is bigger")