my_list <- list(name = "Tejesh", age = 20, score = c(90, 80, 100))
print(my_list)

# -----------------------Function of List---------------------------
cat("\nFunction\n")
fun_list <- list(1, "apple", TRUE)
print(fun_list)

cat("\nLength\n")
print(paste("Length = ", length(my_list)))

cat("\nStr\n")
print(paste("str = ", str(my_list)))


# -----------------------Manipulation in List------------------------
cat("\nManipulation\n")
man_list <- list(name = "Tejesh", username = "mastercooder", age = 20)
print(man_list)

cat("\nOperations in List\n")
man_list$cource <- "BCAAIML "
print(man_list)

cat("\nArithmetic Opeations\n")
a <- 10
b <- 3

cat("Addition = ", a+b, "\n")
cat("Subtraction = ", a-b, "\n")
cat("Multiplication = ", a*b, "\n")
cat("Division = ", a/b, "\n")
cat("Module = ", a%%b, "\n") 

cat("\nRelational Operator\n")
cat("== (equal to)
!= (not equal to)
> (greater than)
< (less than)
>= (greater than or equal to)
<= (less than or equal to)\n")

cat("\nComprison Operators\n")
cat("Equal to = ", a==b, "\n")
cat("Not Equal to = ", a!=b, "\n")
cat("Greater then or Equal to = ", a>=b, "\n")
cat("less then or Equal to = ", a<=b, "\n")

cat("\nLogical Operators\n")
p <- TRUE
q <- FALSE

cat("AND = ", p&q, "\n")
cat("OR = ", p | q, "\n")
cat("NOT = ", !p, "\n")

cat("\nAge Modification\n")
man_list$age <- 21
print(paste("Age = ", man_list$age))

cat("\nAccessing\n")
acs_name <- man_list$name # Access the element by name
print(paste("Access by Name = ", acs_name))

acs_idx <- man_list[2] # Accessing by Index
print(paste("Access by Index = ", acs_idx))