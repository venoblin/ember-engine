#include "../include/vector3.h"

using namespace Engine;

Vector3::Vector3() : x_(0.0f), y_(0.0f), z_(0.0f) {}
Vector3::Vector3(float x, float y, float z) : x_(x), y_(y), z_(z) {}

void Vector3::add(float x, float y, float z) 
{
  x_ += x;
  y_ += y;
  z_ += z;
}
void Vector3::subtract(float x, float y, float z) 
{
  x_ -= x;
  y_ -= y;
  z_ -= z;
}
void Vector3::setX(float x)
{
  x_ = x;
}
void Vector3::setY(float y)
{
  y_ = y;
}
void Vector3::setZ(float z)
{
  z_ = z;
}
float Vector3::getX() 
{
  return x_;
}
float Vector3::getY() 
{
  return y_;
}
float Vector3::getZ() 
{
  return z_;
}
