# user <- readline(prompt = "Enter you name: ")
# print(user)

my_data <- data.frame(name = c("Alice", "Bob"), age = c(30, 25))
write.csv(my_data, "text.csv", row.names = FALSE, quote = FALSE)

read.csv("text.csv")

cat("\n")
print("String Operations")
string1 <- "Hello World"
length1 <- nchar(string1)
print(length1) # Output: 11

string2 <- "R Programming"
length2 <- nchar(string2)
print(length2) # Output: 13