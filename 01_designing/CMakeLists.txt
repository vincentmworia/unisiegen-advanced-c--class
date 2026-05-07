cmake_minimum_required(VERSION 3.28)
project(01_designing)

set(CMAKE_CXX_STANDARD 17)

# Load ncurses support
find_package(Curses REQUIRED)

# 1. Standard Program
add_executable(Birthday Birthday.cpp)

# 2. Graphical Program
add_executable(BDayCentre BDayCentre.cpp)
target_link_libraries(BDayCentre PRIVATE ${CURSES_LIBRARIES})