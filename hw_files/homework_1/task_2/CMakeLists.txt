cmake_minimum_required(VERSION 3.1)
project(cpp_hw1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include/)
# add_executable(build/sum.o src/sum.cpp)
# add_executable(build/subtract.o src/subtract.cpp)
add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main ipb_arithmetic)