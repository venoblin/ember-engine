#include "window.h"
#include "object.h"

class EmberEngine : public Window {
  public:
    EmberEngine(const char* title, int width, int height) 
    : Window(title, width, height) {} 

    void update() override {
      Object obj(20, 50, 50, 50, 0);
      
      this->draw(obj);
    }
};

int main() {
  EmberEngine engine("EmberEngine", 640, 380);
  engine.run();
  return 0;
}