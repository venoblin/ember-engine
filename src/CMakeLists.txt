add_executable(engine
  main.cpp
  vector3.cpp
  app.cpp
)

target_link_libraries(engine PRIVATE ${wxWidgets_LIBRARIES})