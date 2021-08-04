cmake_minimum_required(VERSION 3.6)

project(sdl2dg)


add_library(sdl2dg STATIC src/sdl2dg.cpp)
target_include_directories(sdl2dg PUBLIC include)