# -------------------------------VECTOR--------------------------------
# Number Vector 
vector <- c(1, 2, 3, 4, 5)
print(vector)

# Character Vector
char <- c("apple", "samsung", "Vivo")
print(char)

# Logical Vector
bool_vec <- c(TRUE, FALSE, TRUE)
print(bool_vec)


# --------------------Function in Vectors--------------------------
# Length
print(paste("Length = ", length(vector)))

# Sum
print(paste("Sum = ", sum(vector)))

# Mean
print(paste("Mean = ", mean(vector)))


# -----------------------Manipulation in Vector------------------------
print(vector[2]) # Access the second element from the vector
vector[2] <- 5 # Modifying Element
print(vector)

# -----Operations in Vector--------
v <- c(1, 2, 3)
v2 <- c(4, 5, 6)

# Addition in Vector
sum_vector <- v+v2
cat("Sum of the vector = ", sum_vector)
cat("\n\n")

# Multiplication in Vector 
mul_vector <- v*v2
cat("Multiplication in Vector = ", mul_vector)
cat("\n")

# Concatenation in Vector 
v3 <- c(6, 7)
con_vector <- c(vector, v3)
cat("Concatenated Vector: ", con_vector)