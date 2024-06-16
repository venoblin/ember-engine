#include "../include/game.h"
#include <iostream>

using namespace Engine;

Game::Game() : _isRunning(false) {}

void Game::run()
{
  setIsRunning(true);
  
  while (_isRunning)
  {
    std::cout << "Running..." << std::endl;
  }
}

void Game::stop()
{
  std::cout << "Stopped" << std::endl;
}

void Game::setIsRunning(bool b)
{
  _isRunning = b;
}
