cmake_minimum_required(VERSION 3.10)

project(HelloWorld)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(HelloWorld
	src/main.cpp
	src/glad.c
)
target_include_directories(HelloWorld PRIVATE include)

target_link_libraries(HelloWorld
	glfw
	GL
	m
	X11
	pthread
	Xi
	Xrandr
	dl
)
