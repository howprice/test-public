cmake_minimum_required(VERSION 3.12)
project(MyProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main executable
add_executable(
    main 
    "src/main.cpp"
)
