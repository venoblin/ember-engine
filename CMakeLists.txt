cmake_minimum_required(VERSION 3.18)

project(
  game-engine
  VERSION "0.1.0"
  DESCRIPTION "Custom game engine"
  LANGUAGES CXX
)

find_package(wxWidgets REQUIRED)

include_directories(${wxWidgets_INCLUDE_DIRS})

add_subdirectory("src")

target_link_libraries(engine PRIVATE ${wxWidgets_LIBRARIES})
