#include "object.h"

Object::Object() : width(680), height(480), x(0), y(0), z(0) {}
Object::Object(int width, int height, float x, float y, float z) 
: width(width), height(height), x(x), y(y), z(z) {
  this->collider.w = width;
  this->collider.h = height;
  this->collider.x = x;
  this->collider.y = y;
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
void Object::setX(float x) {
  this->x = x;
}
void Object::setY(float y) {
  this->y = y;
}
void Object::setZ(float z) {
  this->z = z;
}

int Object::getWidth() const { return this->width; }
int Object::getHeight() const { return this->height; }
float Object::getX() const { return this->x; }
float Object::getY() const { return this->y; }
float Object::getZ() const { return this->z; }
SDL_Rect Object::getCollider() const { return this->collider; }
