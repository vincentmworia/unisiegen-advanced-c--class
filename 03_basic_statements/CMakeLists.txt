cmake_minimum_required(VERSION 3.28)
project(03_basic_statements)

# Set the standard to 23 to enable the spaceship operator and new suffixes
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Find all .cpp files in the current directory
file(GLOB ALL_SOURCES "*.cpp")

# 2. Loop through each file and create an executable
foreach(SOURCE_FILE ${ALL_SOURCES})
    # Get the filename without the path and without the .cpp extension
    # e.g., "D:/.../example00.cpp" becomes "example00"
    get_filename_component(EXE_NAME ${SOURCE_FILE} NAME_WE)

    # Create the executable (e.g., example00, example01, etc.)
    add_executable(${EXE_NAME} ${SOURCE_FILE})

    # Optional: Print a message to the console so you know it worked
    message(STATUS "Created executable: ${EXE_NAME}")
endforeach()