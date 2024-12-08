#include "window.h"

Window::Window(const char* title, int width, int height) 
: title(title), width(width), height(height) {
  this->sdlInit = SDL_INIT_VIDEO;
  this->window = SDL_CreateWindow(
    title, 
    SDL_WINDOWPOS_UNDEFINED, 
    SDL_WINDOWPOS_UNDEFINED,  
    width, 
    height, 
    SDL_WINDOW_SHOWN
  );
  this->renderer = SDL_CreateRenderer(this->window, -1,  SDL_RENDERER_SOFTWARE);
}