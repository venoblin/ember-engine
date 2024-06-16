#include "../include/game.h"
#include <iostream>

Engine::Game::Game() : _isRunning(false) {}

void Engine::Game::Game::run()
{
  setIsRunning(true);
  
  while (_isRunning)
  {
    std::cout << "Running..." << std::endl;
  }
}

void Engine::Game::Game::stop()
{
  std::cout << "Stopped" << std::endl;
}

void Engine::Game::Game::setIsRunning(bool b)
{
  _isRunning = b;
}
