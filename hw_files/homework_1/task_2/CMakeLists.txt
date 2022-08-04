cmake_minimum_required(VERSION 3.1)
project(first_project
    LANGUAGES   CXX
    VERSION     1.0.0
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/results/lib)

add_library(
    ipb_arithmetic 
    src/subtract.cpp 
    src/sum.cpp
    # include/ipb_arithmetic/subtract.hpp
    # include/ipb_arithmetic/sum.hpp
)
add_executable(
    test_ipb_arithmetic 
    src/main.cpp
)
target_link_libraries(
    test_ipb_arithmetic 
    ipb_arithmetic
)

set_target_properties(
    ipb_arithmetic PROPERTIES 
    ARCHIVE_OUTPUT_DIRECTORY 
        ${CMAKE_SOURCE_DIR}/results/lib
    PUBLIC_HEADER 
        "include/ipb_arithmetic/subtract.hpp;
        include/ipb_arithmetic/sum.hpp"
)
set_target_properties(
    test_ipb_arithmetic PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY 
        ${CMAKE_SOURCE_DIR}/results/bin
    PUBLIC_HEADER
        ${CMAKE_SOURCE_DIR}/include/ipb_arithmetic.hpp
)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/install)

install(
    TARGETS ipb_arithmetic
    ARCHIVE DESTINATION lib
    PUBLIC_HEADER DESTINATION include
)