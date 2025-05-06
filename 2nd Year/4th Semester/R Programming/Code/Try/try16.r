# Creating an S3 object (based on a list)
create_person <- function(name, age) {
  person <- list(name = name, age = age)
  class(person) <- "person"
  return(person)
}

my_person <- create_person("Alice", 30)
print(my_person) # Initially prints like a list

# Defining a class-specific print method
print.person <- function(obj) {
  cat("S3 Person: Name =", obj$name, ", Age =", obj$age, "\n")
}

print(my_person) # Now uses the print.person method

# Defining another generic function and a method
greet <- function(obj) UseMethod("greet")
greet.person <- function(obj) cat("Hello,", obj$name, "!\n")
greet(my_person)