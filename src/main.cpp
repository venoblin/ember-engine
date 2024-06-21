#include "app.h"
#include <SDL2/SDL.h>

int main()
{
  Engine::App app("Game Engine");
  app.run();

  return 0;
}