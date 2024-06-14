#include "../include/vector3.h"

Engine::Vector3::Vector3(float x, float y, float z) : x_(x), y_(y), z_(z) {}

 void Engine::Vector3::Vector3::add(float x, float y, float z) 
{
  x_ += x;
  y_ += y;
  z_ += z;
}
void Engine::Vector3::Vector3::subtract(float x, float y, float z) 
{
  x_ -= x;
  y_ -= y;
  z_ -= z;
}
void Engine::Vector3::Vector3::setX(float x)
{
  x_ = x;
}
void Engine::Vector3::Vector3::setY(float y)
{
  y_ = y;
}
void Engine::Vector3::Vector3::setZ(float z)
{
  z_ = z;
}
float Engine::Vector3::Vector3::getX() 
{
  return x_;
}
float Engine::Vector3::Vector3::getY() 
{
  return y_;
}
float Engine::Vector3::Vector3::getZ() 
{
  return z_;
}

 