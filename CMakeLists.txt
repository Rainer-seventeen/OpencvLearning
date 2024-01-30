cmake_minimum_required(VERSION 2.8)

project( Test )


find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS})
include_directories(tools)

add_library(tools tools/ImgSimple.cpp)
add_executable( Test src/main.cpp )

target_link_libraries( Test ${OpenCV_LIBS} tools )