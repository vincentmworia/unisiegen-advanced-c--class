cmake_minimum_required(VERSION 3.28)
project(03_basic_statements)

# Set the C++ standard to 2023 (latest)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Find all .cpp files in the current directory and store them in a list
file(GLOB ALL_SOURCES "*.cpp")

# 2. Loop through each file found in the list
foreach(SOURCE_FILE ${ALL_SOURCES})

    # Get the filename without the extension (e.g., "example06.cpp" -> "example06")
    get_filename_component(EXE_NAME ${SOURCE_FILE} NAME_WE)

    # Create the executable for this specific file
    add_executable(${EXE_NAME} ${SOURCE_FILE})

endforeach()