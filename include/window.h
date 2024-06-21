#ifndef WINDOW_H
#define WINDOW_H 

#include <SDL2/SDL.h>
#include <string>

namespace Ui 
{
  class Window
  {
    private:
      const char* _title;
      int _width;
      int _height;

    public:
      Window();
      Window(const char* title);
      Window(const char* title, int width, int height);

      int run();

      virtual void start(SDL_Window* window, SDL_Renderer* renderer);
      virtual void update(SDL_Window* window, SDL_Renderer* renderer);
  };
}

#endif