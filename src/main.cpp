#include <SDL2/SDL.h>
#include <string>
#include <functional>

const char* title = "EmberEngine";
int width = 640;
int height = 380;

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
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,  SDL_RENDERER_SOFTWARE);

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

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);
  }
  
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  
  return 0;
}