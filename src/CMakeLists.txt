file(GLOB_RECURSE SOURCE_FILES "*.cpp")

add_executable(engine ${SOURCE_FILES})

target_link_libraries(engine SDL2main SDL2)
