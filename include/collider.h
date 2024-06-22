#ifndef COLLIDER_H
#define COLLIDER_H

#include "vector3.h"

namespace Physics
{
  class Collider
  {
    private:
      float _width;
      float _height;
      Math::Vector3 _position;
    
    public:
      Collider(float width, float height);
      Collider(float width, float height, Math::Vector3 position);
  };
}

#endif