#include "object.h"

Object::Object(
  int width = 20, 
  int height = 20, 
  float x = 0, 
  float y = 0, 
  float z = 0) : width(width), height(height), x(x), y(y), z(z) {
  this->collider.w = width;
  this->collider.h = height;
  this->collider.x = x;
  this->collider.y = y;
  this->debugMode = false;
}

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
