cmake_minimum_required (VERSION 3.21)

project (Directory_searching)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_SUPPRESS_REGENERATION true)

add_executable(${PROJECT_NAME}
	${CMAKE_SOURCE_DIR}/search_path.h
	Source.cpp)
