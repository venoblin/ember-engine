#include <SDL2/SDL.h>
#include <string>
#include <functional>
#include "object.h"

SDL_Renderer* renderer;

const char* title = "EmberEngine";
int width = 640;
int height = 380;

void update() {
  SDL_Rect rect;
  rect.x = 250;
  rect.y = 150;
  rect.w = 200;
  rect.h = 200;

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderDrawRect(renderer, &rect);
}

int main() {
  int sdlInit = SDL_INIT_VIDEO;
  
  SDL_Window* window = SDL_CreateWindow(
    title, 
    SDL_WINDOWPOS_UNDEFINED, 
    SDL_WINDOWPOS_UNDEFINED,  
    width, 
    height, 
    SDL_WINDOW_SHOWN
  );
  renderer = SDL_CreateRenderer(window, -1,  SDL_RENDERER_SOFTWARE);

  if (sdlInit < 0) {
    SDL_Log("SDL could not initialize! SDL Error: %s", SDL_GetError());
    return 1;
  }

  if (window == nullptr) {
    SDL_Log("Window could not be created! SDL Error: %s", SDL_GetError());
    SDL_Quit();
    return 1;
  }

  if (renderer == nullptr) {
    SDL_DestroyWindow(window);
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
    update();

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderPresent(renderer);
  }
  
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  
  return 0;
}