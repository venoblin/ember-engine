#ifndef WINDOW_H
#define WINDOW_H 

#include <SDL2/SDL.h>
#include <string>
#include <functional>

namespace Ui 
{
  class Window
  {
    private:
      void setUpWindow();
    
    protected:
      SDL_Window* _window;
      SDL_Renderer* _renderer;
      int _sdlInit;
      const char* _title;
      int _width;
      int _height;

    public:
      Window(const char* title, int width, int height);

      int run(std::function<void()> start, std::function<void()> update);
      void draw(const SDL_Rect rect, float r, float g, float b, float a);

      virtual void start();
      virtual void update();
  };
}

#endif