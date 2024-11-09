cmake_minimum_required(VERSION 3.10)
project(TensorC)

# Set the C standard
set(CMAKE_C_STANDARD 99)

# Add the include directory
include_directories(include)

# Create a static library from the source files
add_library(TensorC STATIC
    src/core.c
    src/operations.c
    src/utils.c
    src/tensor.c
)

# Optionally, add unit tests
enable_testing()
add_subdirectory(tests)
