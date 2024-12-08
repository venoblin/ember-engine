#include "object.h"

Object::Object() : width(680), height(480), x(0), y(0), z(0) {}
Object::Object(int width, int height, float x, float y, float z) 
: width(width), height(height), x(x), y(y), z(z) {
  this->updateCollider(width, height, x, y);
}

void Object::setSize(int width, int height) {
  this->width = width;
  this->height = height;
  this->updateCollider(width, height, this->collider.x, this->collider.y);
}    
void Object::setPosition(float x, float y, float z) {
  this->x = x;
  this->y = y;
  this->z = z;
  this->updateCollider(this->collider.w, this->collider.h, x, y);
}
void Object::setX(float x) {
  this->x = x;
  this->updateCollider(this->collider.w, this->collider.h, x, this->collider.y);

}
void Object::setY(float y) {
  this->y = y;
  this->updateCollider(this->collider.w, this->collider.h, this->collider.x, y);

}
void Object::setZ(float z) {
  this->z = z;
  this->updateCollider(this->collider.w, this->collider.h, this->collider.x, this->collider.y);
}

int Object::getWidth() const { return this->width; }
int Object::getHeight() const { return this->height; }
float Object::getX() const { return this->x; }
float Object::getY() const { return this->y; }
float Object::getZ() const { return this->z; }
SDL_Rect Object::getCollider() const { return this->collider; }

void Object::updateCollider(int width, int height, float x, float y) {
  this->collider.w = width;
  this->collider.h = height;
  this->collider.x = x;
  this->collider.y = y;
}
