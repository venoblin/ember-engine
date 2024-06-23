#ifndef WINDOW_H
#define WINDOW_H 

#include <SDL2/SDL.h>
#include <string>

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

      int run();
      void draw(const SDL_Rect rect, float r, float g, float b, float a);

      virtual void start(SDL_Window* window, SDL_Renderer* renderer);
      virtual void update(SDL_Window* window, SDL_Renderer* renderer);
  };
}

#endif