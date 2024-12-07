cmake_minimum_required (VERSION 3.30.5)
file (GLOB_RECURSE SOURCE_FILES "src/*.cpp")

project (
  EmberEngine
  VERSION "0.1.0"
  DESCRIPTION "Custom game engine"
  LANGUAGES CXX
)

find_package (SDL2 REQUIRED)
include_directories (${SDL2_INCLUDE_DIRS})

add_executable (EmberEngine ${SOURCE_FILES})
target_link_libraries (EmberEngine SDL2main SDL2)
