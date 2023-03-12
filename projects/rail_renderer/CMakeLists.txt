project(rail_renderer C)

set(RENDERER_SOURCE_DIR src)
set(RENDERER_SOURCE_FILES
  ${RENDERER_SOURCE_DIR}/Window.c
)

add_library(rail_renderer SHARED ${RENDERER_SOURCE_FILES})
target_include_directories(rail_renderer PUBLIC
  ${CMAKE_SOURCE_DIR}/deps/SDL/include
  ${CMAKE_SOURCE_DIR}/deps/CGLM/include
)
target_link_libraries(rail_renderer PUBLIC SDL3-shared cglm)
target_precompile_headers(rail_renderer PUBLIC ${RENDERER_SOURCE_DIR}/pch.h)