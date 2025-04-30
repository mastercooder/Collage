# -----------------------------Control Structure in R------------------------------

# user <- readline(prompt = "Enter You Age: ") # user Input
# print(paste("User Entered = ", user))



cat("\nIf-Else Loops\n")
user <- 15
if(user>18){
    print("You can continue with the website")
} else{
    print("You not meet the minimum age limit to visit this website")
}

cat("\nFor Loop\n")
for (i in 1:5){
    print(i)
}

cat("\nVector using Loop\n")
# Loop using vector
vec <- c(1, 2, 3, 4, 5)
for(num in vec){
    print(num)
}

cat("\nList in Loop\n")
my_list = list(name = "Tejesh", username = "mastercooder", age = 20)
for(element in my_list){
    print(element)
}

cat("\nWhile Loop\n")
i <- 1
while(i<=5){
    print(i)
    i<-i+1
}

cat("\nWhile Loop with condition\n")
x <- 2
while(x<=100){
    x <- x*2 
}
print(x)

cat("\nRepeat Loop\n")
i <- 1
repeat{
    print(i)
    i <- i+1
    if(i>5){
        break
    }
}

cat("\nLoop Control Statement\n")
cat("Break\n")
for(i in 1:10){
    if(i==6){
        break
    }
    print(i)
}

cat("Next\n")
for (i in 1:5){
    if(i==3){
        next
    }
    print(i)
}

cat("\nNested Loop\n")
for (i in 1:5){
    for (j in 1:5){
        print(paste(i ,"X", j , "=", i*j))
    }
}