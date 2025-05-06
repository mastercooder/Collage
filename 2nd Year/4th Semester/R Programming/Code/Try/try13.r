cat("\n")
df <- data.frame(
  col1 = c(1, 2, 3, 4, 5),
  col2 = c(6, 7, 8, 9, 10),
  col3 = c(11, 12, 13, 14, 15)
)
column_means <- apply(df, 2, mean)
print(column_means)

cat("\n")

# Create a sample data frame
df <- data.frame(
  col1 = c(1, 2, 3, 4, 5),
  col2 = c(6, 7, 8, 9, 10),
  col3 = c(11, 12, 13, 14, 15)
)

# Apply the mean function to each column (element of the list)
column_means_list <- lapply(df, mean)
print(column_means_list)