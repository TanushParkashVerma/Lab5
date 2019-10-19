cmake_minimum_required(VERSION 3.14)
project(Lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab5 main.cpp rpn_calculator.cpp rpn_calculator.hpp abstract_operation.hpp operation.hpp addition_operation.hpp subtraction_operation.hpp division_operation.hpp multiplication_operation.hpp)