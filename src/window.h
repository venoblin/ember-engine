#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include "object.h"

class Window {
  protected:
    SDL_Window* window;
    SDL_Renderer* renderer;
    int sdlInit;
    const char* title;
    int width;
    int height;

  public:
    Window(const char* title, int width, int height);

    int run();
    void draw(Object obj);
    virtual void eventListener(SDL_Event event);
    virtual void start();
    virtual void update();
};

#endif