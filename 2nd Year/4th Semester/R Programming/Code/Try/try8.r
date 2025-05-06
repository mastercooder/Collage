matrix_byrow <- matrix(data = 1:9, nrow = 3, ncol = 3, byrow = TRUE)
print(matrix_byrow)

vector1 <- c(1, 2, 3)
vector2 <- c(4, 5, 6)
vector3 <- c(7, 8, 9)

# Creating a matrix by column binding
matrix_cbind <- cbind(vector1, vector2, vector3)
print(matrix_cbind)

# Creating a matrix by row binding
matrix_rbind <- rbind(vector1, vector2, vector3)
print(matrix_rbind)

cat("\n\n")
# This is not a way to create matrix in R
# mat <- [[1, 2], [3, 4]]
# print(mat)

# Right Way
mat <- matrix(1:6, nrow = 3, ncol = 2)
print(mat)