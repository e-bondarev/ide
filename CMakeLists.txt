cmake_minimum_required(VERSION 3.16)

file(GLOB_RECURSE VAR_SRC src/*.cpp)

project(ide)

add_executable(ide ${VAR_SRC})

add_subdirectory(external/glfw)
add_subdirectory(external/glew/build/cmake)

target_link_libraries(ide glfw glew_s)
target_include_directories(ide PUBLIC src src/external external/glfw/include external/glew/include)