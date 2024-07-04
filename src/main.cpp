#include "app.h"
#include <SDL2/SDL.h>
#include <functional>

int main()
{
  Engine::App app("Game Engine", 640, 480);

  app.run(app.update(), app.start());

  return 0;
}