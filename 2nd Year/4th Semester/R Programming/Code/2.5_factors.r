color <- factor(c("red", "blue", "blue", "green", "red"))
print(color)

# ---------------------Function in Factor-----------------------------
# levels
print(paste("levels = ", levels(color)))

# Frequency Table
print(paste("table = ", table(color)))

# Modification in Factor
levels(color) <- c("blue", "orange", "yello");
print(color)

factor_data <- c("Low", "Medium", "High")
factor_data <- factor(factor_data, levels = c("Low", "High", "High"))
print(factor_data)
