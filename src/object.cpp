#include "object.h"

class Object {
  private:
    int width;
    int height;
    float x;
    float y;
    float z;
  public:
    Object(int width, int height, float x, float y, float z) 
    : width(width), height(height), x(x), y(y), z(z) {}

    void setSize(int width, int height) {
      this->width = width;
      this->height = height;
    }
    
    void setPosition(float x, float y, float z) {
      this->x = x;
      this->y = y;
      this->z = z;
    }

    int getWidth();
    int getHeight();
    float getX();
    float getY();
    float getZ();
};