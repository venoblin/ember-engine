#include "window.h"
#include "app.h"
#include <string>
#include <iostream>

using namespace Ui;

Window::Window() : _title("Undefined"), _width(640), _height(480) {}
Window::Window(const char* title) : _title(title), _width(640), _height(480) {}
Window::Window(const char* title, int width, int height) : _title(title), _width(width), _height(height) {}

int Window::run()
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0) 
  {
    SDL_Log("SDL could not initialize! SDL Error: %s", SDL_GetError());
    return 1;
  }
  
  _window = SDL_CreateWindow(
    _title, 
    SDL_WINDOWPOS_UNDEFINED, 
    SDL_WINDOWPOS_UNDEFINED, 
    _width, 
    _height, 
    SDL_WINDOW_SHOWN
  );

  if (_window == nullptr) 
  {
    SDL_Log("Window could not be created! SDL Error: %s", SDL_GetError());
    SDL_Quit();
    return 1;
  }

  _renderer = SDL_CreateRenderer(_window, -1,  SDL_RENDERER_SOFTWARE);
  if (_renderer == nullptr) 
  {
    SDL_DestroyWindow(_window);
    SDL_Quit();
    return 1;
  }

  Engine::App* app = new Engine::App();
  app->start();

  bool quit = false;
  SDL_Event event;
  while (!quit) 
  {
    while (SDL_PollEvent(&event)) 
    {
      if (event.type == SDL_QUIT) 
      {
        quit = true;
      }
    }

    SDL_SetRenderDrawColor(_renderer, 0, 0, 0, 255);
    SDL_RenderClear(_renderer);

    app->update();

    SDL_RenderPresent(_renderer);
  }
  
  delete(app);
  SDL_DestroyRenderer(_renderer);
  SDL_DestroyWindow(_window);
  SDL_Quit();

  return 0;
}

void Window::start() {}

void Window::update() {}