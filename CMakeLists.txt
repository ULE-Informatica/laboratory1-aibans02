cmake_minimum_required(VERSION 3.10)

# set the project name
project(P3 VERSION 1.0)

# specify the C standard
set(CMAKE_STANDARD 11)
set(CMAKE_STANDARD_REQUIRED True)

# add the executable
add_executable(P3 exampleStrings.c)
target_compile_options(P3 PRIVATE -Wall)
