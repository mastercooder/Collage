mat1 <- matrix(1:6, nrow = 3, ncol = 2, byrow = TRUE)
print(mat1)

mat2 <- matrix(1:6, nrow = 3, ncol = 2)
print(mat2)

cat("\nAddition\n")
mat3 <- mat1 + mat2
print(mat3)

cat("\nSubtraction\n")
mat4 <- mat1 - mat2
print(mat4)

cat("\nMultiplication\n")
mat5 <- mat1 * mat2
print(mat5)

