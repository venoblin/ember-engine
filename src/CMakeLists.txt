file(GLOB_RECURSE SOURCE_FILES "*.cpp")

add_executable(game-engine ${SOURCE_FILES})

target_link_libraries(game-engine SDL2main SDL2)
