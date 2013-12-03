cmake_minimum_required(VERSION 2.6)
project(schroedinger_test)
set(SRCS
	schroedinger_gtest.cpp
)
include_directories(${PROJECT_SOURCE_DIR}/../thirdparty/gtest-1.7.0/include)
file(GLOB HEADERS "*.h")
add_executable(schroedinger_gtest ${SRCS} ${HEADERS})
target_link_libraries (schroedinger_gtest gtest)
add_test(schroedinger schroedinger_gtest)
