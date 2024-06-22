#include "app.h"
#include "window.h"
#include "collider.h"
#include <iostream>

using namespace Engine;

App::App() : App::Window() {}
App::App(const char* title) : App::Window(title) {}
App::App(const char* title, int width, int height) : App::Window(title, width, height) {}

void App::start(SDL_Window* window, SDL_Renderer* renderer) {}

void App::update(SDL_Window* window, SDL_Renderer* renderer)
{
  SDL_Rect rectangle;
  int windowWidth, windowHeight;
  SDL_GetWindowSize(window, &windowWidth, &windowHeight);
  rectangle.x = windowWidth / 2 - 50;  
  rectangle.y = windowHeight / 2 - 50; 
  rectangle.w = 100;  
  rectangle.h = 100; 
  App::draw(rectangle, 255, 0, 0, 255);
  // SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  
  // SDL_RenderDrawRect(renderer, &rectangle); 
}