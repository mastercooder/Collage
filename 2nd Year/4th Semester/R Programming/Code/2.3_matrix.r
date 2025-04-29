# -----------------------------------Matrix-------------------------------
# Matrix 2X3
m <- matrix(1:6, nrow = 2, ncol = 3)
print(m)   
print("\n")

# Rename the Rows and Columns
m2 <- matrix(1:16, nrow = 4, ncol = 4, dimnames = list(c("Row1", "Row2", "Row3", "Row4"), c("Col1", "Col2", "Col3", "Col4")))
print(m2)


# ---------------------Function of Matrix--------------------------
# Dimension
print(paste("Dimensation = ", dim(m)))

# Transpospe
cat("Transpose = ", t(m))
cat("\n")

# Sum
cat("Sum = ", sum(m))
cat("\n")

# Apply
cat("apply = ", apply(m, 2, sum))

# -------------------------Manuplation in Matrix--------------------------
# Realocating any Element 
m[1, 2] <- 100
print(m)

# Addition in Matrix
m3 <- matrix(1:9, nrow = 3, ncol = 3)
m4 <- matrix(1:9, nrow = 3, ncol = 3)
print(m3)

sum_matrix <- m3+m4
cat("Matrix Addition\n")
print(sum_matrix)

# Scalar Multiplication
scal_matrix = 2*m3
cat("\nScalar Multiplication \n")
print(scal_matrix)

# Matrix Multiplication 
m5 <- matrix(c(1, 2, 3, 4), nrow = 2, ncol = 2)
m6 <- matrix(c(5, 6, 7, 8), nrow = 2, ncol = 2)
product <- m5%*%m6
cat("Matrix Multiplication Results\n")
print(product)
cat("\n")

# Combining Matrix
print(m3)
print(m4) 
m7 <- rbind(m3, m4)
cat("Matrix after new bound\n")
print(m7)
cat("\n")

m8 <- cbind(m3, m4)
cat("Matrix after new Colum Bind\n")
print(m8)
cat("\n")