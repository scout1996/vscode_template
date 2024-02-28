cmake_minimum_required(VERSION 3.5)
project(leetcode)
add_definitions(-std=c++11)

SET(CMAKE_BUILD_TYPE "Debug")

find_package(OpenCV REQUIRED)

include_directories(
    include
    ${OpenCV_INCLUDE_DIRS}
    )

# include_directories(
#     include
#     )

aux_source_directory(src SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

