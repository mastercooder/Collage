gender <- factor(c("M", "F", "F", "M"))
print(gender)

add_numbers <- function(x, y) {
  sum_result <- x + y
  return(sum_result)
}

# Calling the function
result <- add_numbers(5, 3)
cat("\n")
print(result) # Output: 8

cat("\n")
print("Function 2")
 
checkEvenOdd <- function(num){
    return(num%%2==0)
}

result <- checkEvenOdd(4)
print(result)