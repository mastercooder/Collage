my_list <- list(name = "Tejesh", age = 20, score = c(90, 80, 100))
print(my_list)

# -----------------------Function of List---------------------------
# Length Function
print(paste("Length = ", length(my_list)))

# str Function 
print(paste("str = ", str(my_list)))


# -----------------------Manipulation in List------------------------
print(my_list$name) # Access the name in the list
my_list$score <- 50
print(my_list)