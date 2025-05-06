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

checkEvenOdd <- function(num) {
  return(num %% 2 == 0)
}

result <- checkEvenOdd(4)
print(result)

cat("\n")
print("Function 3")
create_multiplier <- function(factor) {
  function(x) {
    return(x * factor)
  }
}

double <- create_multiplier(2)
triple <- create_multiplier(3)

print(double(10)) # Output: 20
print(triple(10)) # Output: 30

cat("\n")
print("Function 4: Debug Function")
my_function <- function(a, b) {
  result <- a + b
  if (result > 10) {
    final_result <- result * 2
  } else {
    final_result <- result - 2
  }
  return(final_result)
}

# Enter debug mode for my_function
# debug(my_function) # Commented out debug to allow normal execution

# Now, when you call my_function, it will enter debug mode
output_func4 <- my_function(6, 5)
print(output_func4)

cat("\n")
print("THis is printing")
print("Function 5: Trackback Function")
another_function <- function(y) {
  z <- 10 / y
  return(z)
}

yet_another_function <- function(x) {
  result <- another_function(x - 5)
  return(result)
}

# This will cause an error (division by zero)
output_func5 <- tryCatch(
  yet_another_function(5),
  error = function(e) {
    print("An error occurred:")
    print(conditionMessage(e)) # Correct way to get the error message
    traceback()
    return(NULL) # Or some other appropriate value to return on error
  }
)

print(output_func5)