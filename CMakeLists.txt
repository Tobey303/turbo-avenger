cmake_minimum_required(VERSION 2.6)
project(schroedinger)
set(SRCS
	main.cpp
)
enable_testing()
file(GLOB HEADERS "*.h")

add_executable(schroedinger ${SRCS} ${HEADERS})
add_subdirectory(test)
add_subdirectory(thirdparty)
