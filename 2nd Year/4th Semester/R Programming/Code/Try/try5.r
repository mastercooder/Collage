v <- c(1, 2, 3, 4, 5, 6)
print(v[v>3])

i <- 1  # Initialize an index
while (i <= length(v)) { # Loop through the vector using the index
    if (v[i] > 3) {
        print(v[i])
    }
    i <- i + 1  # Increment the index to avoid an infinite loop
}