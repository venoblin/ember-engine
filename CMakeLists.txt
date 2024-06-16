cmake_minimum_required(VERSION 3.18)

project(
  game-engine
  VERSION "0.1.0"
  DESCRIPTION "Custom game engine"
  LANGUAGES CXX
)

find_package(wxWidgets REQUIRED COMPONENTS core net base)

include(${wxWidgets_USE_FILE})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory("src")


