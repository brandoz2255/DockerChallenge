# Stage 1: Build the executable
FROM debian:bullseye-slim AS builder

# Install gcc and necessary build tools
RUN apt-get update && apt-get install -y gcc

# Set the working directory
WORKDIR /app

# Copy the source code into the container
COPY calculator.c .

# Compile the C program
RUN gcc -o calculator calculator.c

# Stage 2: Create the runtime image
FROM debian:bullseye-slim

# Set the working directory
WORKDIR /app

# Copy the compiled binary from the builder stage
COPY --from=builder /app/calculator .

# Set the command to run the calculator app
CMD ["./calculator"]

