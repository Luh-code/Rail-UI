cmake_minimum_required(VERSION 3.10)

project(testprog C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

set(SOURCE_FILES src/Window.c
  src/Test.c)

add_subdirectory(deps/SDL)

add_executable(testprog ${SOURCE_FILES})
target_include_directories(testprog PUBLIC ${PROJECT_SOURCE_DIR}/deps/sdl/include)
target_link_libraries(testprog PUBLIC SDL3-shared)