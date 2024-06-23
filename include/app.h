#ifndef APP_H
#define APP_H

#include "window.h"

namespace Engine
{
  class App : public Ui::Window
  { 
    public:
      App(const char* title, int width, int height);

      void start(SDL_Window* window, SDL_Renderer* renderer) override;
      void update(SDL_Window* window, SDL_Renderer* renderer) override;
  };
}

#endif