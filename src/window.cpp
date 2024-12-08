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
  while (!quit) {
    while (SDL_PollEvent(&this->event)) {
      if (this->event.type == SDL_QUIT) {
        quit = true;
      }
    }

    SDL_RenderClear(this->renderer);

    update();

    SDL_SetRenderDrawColor(this->renderer, 0, 0, 0, 255);
    SDL_RenderPresent(this->renderer);
  }
  
  SDL_DestroyRenderer(this->renderer);
  SDL_DestroyWindow(this->window);
  SDL_Quit();

  return 0;
}

void Window::update() {}

void Window::draw(Object obj) {
  SDL_Rect rect = obj.getCollider();

  SDL_SetRenderDrawColor(this->renderer, 255, 255, 255, 255);
  SDL_RenderDrawRect(this->renderer, &rect);
}

SDL_Event Window::getEvent() const { return this->event; }