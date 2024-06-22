#ifndef WINDOW_H
#define WINDOW_H 

#include <SDL2/SDL.h>
#include <string>

namespace Ui 
{
  class Window
  {
    protected:
      SDL_Renderer* _renderer;
      const char* _title;
      int _width;
      int _height;

    public:
      Window();
      Window(const char* title);
      Window(const char* title, int width, int height);

      int run();
      void draw(SDL_Rect rect, float r, float g, float b, float a);

      virtual void start(SDL_Window* window, SDL_Renderer* renderer);
      virtual void update(SDL_Window* window, SDL_Renderer* renderer);
  };
}

#endif