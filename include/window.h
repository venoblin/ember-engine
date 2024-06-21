#ifndef WINDOW_H
#define WINDOW_H 

#include <SDL2/SDL.h>
#include <string>

namespace Ui 
{
  class Window
  {
    protected:
      const char* _title;
      int _width;
      int _height;
      SDL_Window* _window;
      SDL_Renderer* _renderer;

    public:
      Window();
      Window(const char* title);
      Window(const char* title, int width, int height);

      int run();

      virtual void start();
      virtual void update();
  };
}

#endif