
cat("\nCreating Vectors with NA\n")
# Creating a numeric vector with NA
numeric_vector <- c(1, 2, NA, 4, 5)

# Creating a character vector with NA
character_vector <- c("a", "b", NA, "d")

# Creating a logical vector with NA
logical_vector <- c(TRUE, FALSE, NA, TRUE)

print(numeric_vector)
print(character_vector)
print(logical_vector)


cat("\nChecking for NA Values\n")
vector_with_na <- c(10, NA, 20, NA, 30)

# Check for NA values
na_check <- is.na(vector_with_na)
print(na_check)  # Output: FALSE  TRUE FALSE  TRUE FALSE

# Count the number of NA values
sum(is.na(vector_with_na))  # Output: 2


cat("\nHandling NA in Calculations\n")
vector_with_na <- c(1, 2, NA, 4, 5)

# Calculate the sum (result will be NA)
sum_with_na <- sum(vector_with_na)
print(sum_with_na)  # Output: NA

# Calculate the sum, removing NA values
sum_without_na <- sum(vector_with_na, na.rm = TRUE)
print(sum_without_na)  # Output: 12

# Calculate the mean, removing NA values
mean_without_na <- mean(vector_with_na, na.rm = TRUE)
print(mean_without_na) # Output: 3


cat("\n Filtering NA Values\n")
vector_with_na <- c(10, NA, 20, NA, 30)

# Create a new vector without NA
vector_no_na <- vector_with_na[!is.na(vector_with_na)]
print(vector_no_na)  # Output: 10 20 30


cat("\nifelse() with NA\n")
values <- c(10, NA, 20, 30, NA)

# Classify values as greater than 15 or not
classification <- ifelse(values > 15, "Greater than 15", "Not greater than 15")
print(classification)
# Output: "Not greater than 15" NA "Greater than 15" "Greater than 15" NA