cmake_minimum_required(VERSION 3.16)

file(GLOB_RECURSE VAR_SRC src/*.cpp)

project(ide)

add_executable(ide ${VAR_SRC})