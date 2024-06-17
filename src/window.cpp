#include "window.h"
#include <string>

using namespace Ui;

Window::Window() : _title("Undefined"), _width(640), _height(480) 
{
  setupWindow();
}
Window::Window(const char* title, int width, int height) : _title(title), _width(width), _height(height) 
{
  setupWindow();
}

void Window::setupWindow()
{
  SDL_Window* window = SDL_CreateWindow(
    _title, 
    SDL_WINDOWPOS_UNDEFINED, 
    SDL_WINDOWPOS_UNDEFINED, 
    _width, 
    _height, 
    SDL_WINDOW_SHOWN
  );
}

SDL_Window* Window::getWindow()
{
  return _window;
}