#ifndef VECTOR3_H
#define VECTOR3_H

namespace Engine
{
  /**
  * Vector3 data structure with x, y, and z coordinates
  */
  class Vector3
  {
    private:
      float x;
      float y;
      float z;

    public:
      Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
      Vector3(float argX, float argY, float argZ) : x(argX), y(argY), z(argZ) {}

      void add(float argX, float argY, float argZ);
      void subtract(float argX, float argY, float argZ);
    
      void setX(float argX);
      void setY(float argY);
      void setZ(float argZ);

      float getX();
      float getY();
      float getZ();
  };
}

#endif