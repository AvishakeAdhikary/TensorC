cmake_minimum_required(VERSION 3.10)

project(TensorC VERSION 0.0.1)

# Set C standard
set(CMAKE_C_STANDARD 99)

# Add include directories
include_directories(include)

# Platform-specific settings (if needed)
if(WIN32)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /D_CRT_SECURE_NO_WARNINGS")
elseif(APPLE)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_POSIX_C_SOURCE=200809L")
endif()

# Add source files
add_library(TensorC STATIC
    src/core.c
    src/operations.c
    src/utils.c
    src/tensor.c
)

# Enable testing (optional)
enable_testing()
add_subdirectory(tests)
