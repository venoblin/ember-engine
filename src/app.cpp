#include "../include/app.h"
#include <iostream>

using namespace Engine;

App::App() : _isRunning(false) {}

void App::run()
{
  setIsRunning(true);
  std::string answer;
  
  std::cout << "Running..." << std::endl;
  
  while (_isRunning)
  {
    std::cout << "(q) to quit" << std::endl;
    std::cin >> answer;

    if (answer == "q") {
      stop();
    }
  }
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
