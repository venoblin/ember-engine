#include "collider.h"
#include "vector3.h"

using namespace Physics;

Collider::Collider(float width, float height) : _width(width), _height(height), _position(0, 0, 0) 
{
  setUpRect();
}

Collider::Collider(float width, float height, Math::Vector3 position) : _width(width), _height(height), _position(position) 
{
  setUpRect();
}

void Collider::setUpRect()
{
  _rectangle.x = _position.getX();  
  _rectangle.y = _position.getY(); 
  _rectangle.w = _width;  
  _rectangle.h = _height; 
}