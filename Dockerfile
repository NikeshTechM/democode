# Use an official GCC image as the base
FROM gcc:latest

# Set working directory
WORKDIR /app

# Copy source code to the container
COPY main.cpp .

# Compile the C++ program
RUN g++ -o app main.cpp

# Define the command to run the compiled binary
CMD ["./app"]
