#include "app.h"
#include "window.h"
#include <iostream>

using namespace Engine;

App::App() : _isRunning(false) {}

void App::run()
{
  Ui::Window window("Game Engine");
  window.run();
}

void App::stop()
{
  std::cout << "Stopped" << std::endl;
  setIsRunning(false);
}

void App::setIsRunning(bool b)
{
  _isRunning = b;
}
