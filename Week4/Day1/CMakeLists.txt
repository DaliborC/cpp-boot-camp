cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(bookshop VERSION 1.0)

# source files, *.cpp
file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(bookshop main_book_shop_new.cpp ${SRC_FILES})
# header files
target_include_directories(bookshop PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)