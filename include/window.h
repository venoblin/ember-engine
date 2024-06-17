#ifndef WINDOW_H
#define WINDOW_H 

#include <SDL2/SDL.h>
#include <string>

namespace Ui 
{
  class Window
  {
    private:
      std::string _title;
      int _width;
      int _height;
    
    public:
      Window();
      Window(std::string title, int width, int height);
  };
}

#endif