cmake_minimum_required( VERSION 3.0 )
project( TP1 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

add_executable( fibonacci.out src/fibonacci.cpp src/main.cpp )
