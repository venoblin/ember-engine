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

int Window::run () {
  if (this->sdlInit < 0) {
    SDL_Log("SDL could not initialize! SDL Error: %s", SDL_GetError());
    return 1;
  }
  if (this->window == nullptr) {
    SDL_Log("Window could not be created! SDL Error: %s", SDL_GetError());
    SDL_Quit();
    return 1;
  }
  if (this->renderer == nullptr) {
    SDL_DestroyWindow(this->window);
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

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderPresent(renderer);
  }
  
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}