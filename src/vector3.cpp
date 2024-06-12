#include "../include/vector3.h"

namespace Engine
{
  class Vector3
  {
    private:
      float x;
      float y;
      float z;
    
    public:
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

      void setX(float x)
      {
        this->x = x;
      }
      void setY(float y)
      {
        this->y = y;
      }
      void setZ(float z)
      {
        this->z = z;
      }

      float getX() 
      {
        return this->x;
      }
      float getY() 
      {
        return this->y;
      }
      float getZ() 
      {
        return this->z;
      }
  };
}