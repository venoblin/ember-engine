#include "../include/app.h"
#include <iostream>

using namespace Engine;

App::App() : _isRunning(false) {}

void App::run()
{
  setIsRunning(true);
  
  while (_isRunning)
  {
    std::cout << "Running..." << std::endl;
  }
}

void App::stop()
{
  std::cout << "Stopped" << std::endl;
}

void App::setIsRunning(bool b)
{
  _isRunning = b;
}
