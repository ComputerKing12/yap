cmake_minimum_required(VERSION 3.25)
project(
	yap
)

include_directories(
	include 
	thirdparty/cpr/include
)

add_subdirectory(src)
add_subdirectory(thirdparty)

# set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/thirdparty/cpr)
find_package(${CMAKE_SOURCE_DIR}/thirdparty/cpr/cpr REQUIRED)

set(CPR_LIBRARY ${CMAKE_SOURCE_DIR}/thirdparty/cpr)
set(CPR_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/thirdparty/cpr/include)
set(BUILD_SHARED_LIBS off)

add_executable(
	yap
	src/main.cpp
)
add_dependencies(yap yaplib)

target_link_libraries(yap yaplib cpr::cpr)