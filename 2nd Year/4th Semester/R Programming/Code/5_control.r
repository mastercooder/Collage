# -----------------------------Control Structure in R------------------------------

# user <- readline(prompt = "Enter You Age: ") # user Input
# print(paste("User Entered = ", user))

# if-else |- Control Statement
user <- 15
if(user>18){
    print("You can continue with the website")
} else{
    print("You not meet the minimum age limit to visit this website")
}
cat("\n")

# Loop |- For Loop
for (i in 1:5){
    print(i)
}
cat("\n")
# Loop |- While Loop
i <- 1
while(i<=5){
    print(i)
    i<-i+1
}