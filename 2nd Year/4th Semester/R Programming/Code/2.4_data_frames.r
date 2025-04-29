# Data Frames
df <- data.frame(
    name = c("Tejesh", "Patel", "mastercoder"),
    age = c(19, 20, 30),
    score = c(100, 90, 80)
)
print(df)


# Function in Data Frames 
# head 
print(paste("head = f", head(df)))

#Summery
print(paste("summary = ", summary(df)))


# -----------------------Manipulation in Data Frames------------------------
print(df$age) # Access the age from the Data Frames