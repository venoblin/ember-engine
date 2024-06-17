add_executable(engine
  main.cpp
  vector3.cpp
  app.cpp
  window.cpp
  mainFrame.cpp
)

target_link_libraries(engine SDL2main SDL2)
