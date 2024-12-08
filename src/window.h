#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>

class Window {
  private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    int sdlInit;
    const char* title;
    int width;
    int height;
    
  public:
    Window(const char* title, int width, int height);
};

#endif