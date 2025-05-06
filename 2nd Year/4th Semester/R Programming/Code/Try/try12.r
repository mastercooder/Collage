df <- data.frame(
  name = c("Tejesh Patel", "Jayes Patel"),
  rollNo = c(35, 15),
  age = c(20, 15)
)

print(df)

print(df['name'])
cat("\n")
print(df$name)
cat("\n")
print(df[1,])

cat("\n")
cat("Convert to Matrix\n")
mat <- as.matrix(df)
print(mat)
print(mat[1, 2])

cat("\n")
cat("Marging Data Frames\n")
marge_df1 <- data.frame(
    name = c("Tejesh Patel", "Jayesh Patel"), 
    age = c(20, 15)
)
marge_df2 <- data.frame(
    name = c("Orange", "Blue"), 
    age = c(22, 59)
)

margedata <- merge(marge_df1, marge_df2, by=NULL)
print(margedata)
