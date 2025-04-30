# Data Frames
df <- data.frame(
    name = c("Tejesh", "Patel", "mastercoder"),
    age = c(19, 20, 30),
    score = c(100, 90, 80)
)
print(df)


# ---------------------Function in Data Frames----------------------------- 
cat("\nFunction\n")
fnc_dataFrame = data.frame(
    name = c("Apple", "Samsung", "Xioami"),
    price = c(50, 20, 10),
    age = c(10, 20, 5)
)
print(fnc_dataFrame)


cat("\nHead\n")
print(paste("head = ", head(fnc_dataFrame)))

cat("\nSummary\n")
print(paste("summary = ", summary(fnc_dataFrame)))

cat("\nRenaming\n")
colnames(fnc_dataFrame)[colnames(fnc_dataFrame)=="name"] <- "smartphone"
print(fnc_dataFrame)

cat("\nCombining\n")
cat("Row\n")
cmb_frame <- data.frame(
    smartphone = c("Vivo", "Infinix", "Realme"),
    price = c(20, 8, 10),
    age = c(10, 5, 10)
)
rowBind <- rbind(fnc_dataFrame, cmb_frame)
print(rowBind)

cat("Colum\n")
colBind <- cbind(fnc_dataFrame, cmb_frame)
print(colBind)

cat("\nSorting\n")
cat("Assending\n")
sort_ace <- fnc_dataFrame[order(fnc_dataFrame$price),]
print(sort_ace)

cat("Decending\n")
sort_dec <- fnc_dataFrame[order(-fnc_dataFrame$price), ]
print(sort_dec)



# -----------------------Manipulation in Data Frames------------------------
cat("\nManipulation\n")
mlp_dataFrame <- data.frame(
    name = c("Tejesh", "Suraj", "Tushar"),
    age = c(20, 20, 20),
    score = c(80, 90, 60)
)
print(mlp_dataFrame)


cat("\nAccessing Elements\n")
acc_name <- mlp_dataFrame$age # Accessing colum by name
cat("Access Colum By Name = ", acc_name, "\n")

acc_idx <- mlp_dataFrame[,2] # Accessing the colum by index
cat("Access Colum By Index = ", acc_idx, "\n")

acc_row <- mlp_dataFrame[2,] # Accessing Row Index
print(paste("Access Row By Index = ", acc_row))

acc_spc = mlp_dataFrame[2, 2] # Accessing a specific element
print(paste("Access Specific Element = ", acc_spc))


cat("\nAddition\n")
mlp_dataFrame$salary = c(80, 115, 200) 
mlp_dataFrame["Department"] = c("Software Engenier", "Doctor", "Business") 
cat("After Addition\n")
print(mlp_dataFrame)    

cat("\nRemoving\n")
mlp_dataFrame$salary <- NULL
del_idx <- mlp_dataFrame[-2] # Delete Index
cat("After Deletion\n")
print(del_idx)


cat("\nSubsetting Data Frames\n")
sst_frame <- mlp_dataFrame[mlp_dataFrame$score>70, ]
print(sst_frame)