#include "app.h"
#include "window.h"
#include "collider.h"
#include <iostream>
#include <functional>

using namespace Engine;

App::App(const char* title, int width, int height) : App::Window(title, width, height) {}

std::function<void()> App::start() {}

std::function<void()> App::update()
{
  SDL_Rect rectangle;
  int windowWidth, windowHeight;
  SDL_GetWindowSize(_window, &windowWidth, &windowHeight);
  rectangle.x = windowWidth / 2 - 50;  
  rectangle.y = windowHeight / 2 - 50; 
  rectangle.w = 100;  
  rectangle.h = 100; 
  App::draw(rectangle, 255, 0, 0, 255);
  SDL_SetRenderDrawColor(_renderer, 255, 0, 0, 255);  
  SDL_RenderDrawRect(_renderer, &rectangle); 
}