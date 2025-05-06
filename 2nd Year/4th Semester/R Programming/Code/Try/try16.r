# Create a list
my_person <- list(name = "Alice", age = 30)

# Assign a class attribute
class(my_person) <- "person"

print(my_person)
print(class(my_person))

# Generic function (already exists in R)
print(my_person)

# Create a class-specific print method
print.person <- function(obj) {
  cat("Person: Name =", obj$name, ", Age =", obj$age, "\n")
}

# Now print() will use the person-specific method
print(my_person)