#include "window.h"
#include "object.h"

void update(SDL_Renderer* renderer) {
  Object myObject(20, 50, 0, 0, 0);
  SDL_Rect rect = myObject.getCollider();

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderDrawRect(renderer, &rect);
}

int main() {
  Window engine("EmberEngine", 640, 380);
  engine.run();
  
  return 0;
}