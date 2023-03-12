cmake_minimum_required(VERSION 3.10)

project(rail_renderer_test)

set(CMAKE_C_STANDARD 99)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(deps/SDL)
add_subdirectory(deps/CGLM)
add_subdirectory(projects/rail_renderer)

set(RAIL_TEST_SOURCE_DIR ${PROJECT_SOURCE_DIR}/projects/rail_renderer_test/src)
set(RAIL_TEST_FILES ${RAIL_TEST_SOURCE_DIR}/Test.c)

add_executable(rail_renderer_test ${RAIL_TEST_FILES})
target_include_directories(rail_renderer_test PUBLIC projects/rail_renderer/include)
target_link_libraries(rail_renderer_test PUBLIC rail_renderer)