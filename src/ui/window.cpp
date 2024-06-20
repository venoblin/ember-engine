#include "window.h"
#include <string>

using namespace Ui;

Window::Window() : _title("Undefined"), _width(640), _height(480) {}
Window::Window(const char* title) : _title(title), _width(640), _height(480) {}
Window::Window(const char* title, int width, int height) : _title(title), _width(width), _height(height) {}

int Window::run()
{
  _window = SDL_CreateWindow(
    _title, 
    SDL_WINDOWPOS_UNDEFINED, 
    SDL_WINDOWPOS_UNDEFINED, 
    _width, 
    _height, 
    SDL_WINDOW_SHOWN
  );

  if (_window == nullptr) {
    SDL_Log("Window could not be created! SDL Error: %s", SDL_GetError());
    SDL_Quit();
    return 1;
  }

  SDL_Renderer* renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
  if (renderer == nullptr) {
    SDL_DestroyWindow(_window);
    SDL_Quit();
    return 1;
  }

  bool quit = false;
  SDL_Event event;
  while (!quit) {
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        quit = true;
      }
    }
    SDL_RenderClear(renderer);

    SDL_Rect rect;
    rect.x = 250;
    rect.y = 150;
    rect.w = 200;
    rect.h = 200;

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(_window);
  SDL_Quit();

  return 0;
}