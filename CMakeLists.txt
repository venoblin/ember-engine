cmake_minimum_required(VERSION 3.18)

project(
  game-engine
  VERSION "0.1.0"
  DESCRIPTION "Custom game engine"
  LANGUAGES CXX
)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory("src")


