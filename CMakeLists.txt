cmake_minimum_required(VERSION 3.10)

# Set my project name
project(inheritance-practice-michelle)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

# Add executable: main.cpp Employee.cpp HourlyEmployee.cpp SalariedEmployee.cpp 
add_executable(main main.cpp Employee.cpp HourlyEmployee.cpp SalariedEmployee.cpp)
