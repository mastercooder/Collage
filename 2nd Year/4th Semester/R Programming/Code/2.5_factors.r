color <- factor(c("red", "blue", "blue", "green", "red"))
print(color)

# ---------------------Function in Factor---------------------------
cat("\nFunction\n")
gnrl_fcn <- factor(c("low", "medium", "high"))
print(gnrl_fcn)

# levels
cat("\nLevels\n")
print(paste("levels = ", levels(gnrl_fcn)))

cat("Level_2\n")
# gnrl_fcn[levels(gnrl_fcn)=="low"]<-"very low"
# print(lvl_fac)

# Frequency Table
cat("\nFrequency Table\n")
print(paste("table = ", table(color)))

# Ordering in Factor
cat("\nOrdering\n")
ordered_factor <- factor(c("low", "medium", "high"), ordered = TRUE, levels = c("low", "medium", "high"))
print(ordered_factor)

# Coercion of Factor (convert factor to numeric)
cat("\nCoercion\n")
numeric_factor <- as.numeric(gnrl_fcn)
print(paste("Coercion = ", numeric_factor))
print(paste("Normal = ", gnrl_fcn))

cat("Coercion_2\n") #Convert factor to character
cor_fac <- as.character(gnrl_fcn)
print(cor_fac)


# Reordering Factor
cat("\nReordering Factor\n")
reord_fac <- relevel(gnrl_fcn, ref="medium")
print(reord_fac)

# Missing Value Handling
cat("\nMissing Value Handling\n")
print(is.na(gnrl_fcn))

# ---------Modification in Factor--------------
cat("\nModification\n")
levels(color) <- c("blue", "orange", "yello");
print(color)

factor_data <- c("Low", "Medium", "High")
factor_data <- factor(factor_data, levels = c("Low", "Medium", "High"))
print(factor_data)


# -------------------Operations in Factor-------------------
cat("\nOperations\n")
operation_factor1 <- factor(c("low", "medium", "high"))
operation_factor2 <- factor(c("low", "medium", "high"))

# Comparison
cat("Comparison\n")
op1 <- operation_factor1 == operation_factor2
print(op1)

cat("\nAggregating\n")
op2 <- table(operation_factor1)
paste(op2)