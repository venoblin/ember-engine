#include "collider.h"
#include "vector3.h"

using namespace Physics;

Collider::Collider(float width, float height) : _width(width), _height(height), _position(0, 0, 0) {}
Collider::Collider(float width, float height, Math::Vector3 position) : _width(width), _height(height), _position(position) {}
