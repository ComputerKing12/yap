cmake_minimum_required(VERSION 3.25)
project(
	yap
)

include_directories(include)
add_subdirectory(src)


add_executable(
	yap
	src/main.cpp
)
add_dependencies(yap yaplib)
target_link_libraries(yap yaplib)