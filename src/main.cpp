#include "app.h"
#include <SDL2/SDL.h>

int main()
{
  Engine::App app("Game Engine", 640, 480);
  app.run();

  return 0;
}