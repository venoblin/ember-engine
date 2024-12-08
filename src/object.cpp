#include "object.h"

Object::Object(int width, int height, float x, float y, float z) 
: width(width), height(height), x(x), y(y), z(z) {}

void Object::setSize(int width, int height) {
  this->width = width;
  this->height = height;
}    

void Object::setPosition(float x, float y, float z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

int Object::getWidth() const { return this->width; }
int Object::getHeight() const { return this->height; }
float Object::getX() const { return this->x; }
float Object::getY() const { return this->y; }
float Object::getZ() const { return this->z; }
