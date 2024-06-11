#include "../include/vector3.h"

namespace engine
{
  class Vector3
  {
    public:
      float x;
      float y;
      float z;

      void add(float x, float y, float z) 
      {
        this->x += x;
        this->y += y;
        this->z += z;
      }

      void subtract(float x, float y, float z) 
      {
        this->x -= x;
        this->y -= y;
        this->z -= z;
      }
  };
}