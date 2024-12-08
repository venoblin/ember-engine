#include "window.h"
#include "object.h"
#include <iostream>

class EmberEngine : public Window {
  public:
    EmberEngine(const char* title, int width, int height) 
    : Window(title, width, height) {} 

    void update() override {
      Object obj(20, 50, 50, 50, 0);

      if (this->getEvent().type == SDL_KEYDOWN) {
        switch (this->getEvent().key.keysym.sym) {
          case SDLK_UP:
            std::cout << "Up arrow key pressed" << std::endl;
            break;
          case SDLK_DOWN:
            std::cout << "Down arrow key pressed" << std::endl;
            break;
          case SDLK_LEFT:
            std::cout << "Left arrow key pressed" << std::endl;
            break;
          case SDLK_RIGHT:
            std::cout << "Right arrow key pressed" << std::endl;
            break;
          case SDLK_ESCAPE:
            // quit = true;
            break;
          default:
            break;
        }
      }
      
      this->draw(obj);
    }
};

int main() {
  EmberEngine engine("EmberEngine", 640, 380);
  engine.run();
  return 0;
}