cmake_minimum_required(VERSION 3.14)
project(
    image_browser
    LANGUAGES   CXX
    VERSION     1.0.0
)

# include(FetchContent)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++17")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# FetchContent_Declare(fmt
#   GIT_REPOSITORY https://github.com/fmtlib/fmt.git
#   GIT_TAG master
# )
# FetchContent_MakeAvailable(fmt)

include_directories(
    "${CMAKE_SOURCE_DIR}/api"
    "/usr/local/include"
    "/usr/local/lib"
)
link_directories(${CMAKE_SOURCE_DIR}/results/api)

# add_subdirectory(fmt EXCLUDE_FROM_ALL)
find_package(fmt REQUIRED)
# add_library(
#     html_writer
#     src/html_writer.cpp
# )
# target_link_libraries(
#     html_writer
#     fmt::fmt
# )

add_library(
    image_browser_api
    src/image_browser.cpp
    src/html_writer.cpp
)
add_executable(
    create_image_browser
    src/create_image_browser.cpp
)
# target_link_libraries(
#     image_browser
#     html_writer
# )
target_link_libraries(
    create_image_browser
    image_browser_api
    fmt::fmt
)

set_target_properties(
    image_browser_api PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/results/api
)
set_target_properties(
    create_image_browser PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/results/bin
)