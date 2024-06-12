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
      float x_;
      float y_;
      float z_;

    public:
      Vector3() : x_(0.0f), y_(0.0f), z_(0.0f) {}
      Vector3(float x, float y, float z) : x_(x), y_(y), z_(z) {}

      void add(float x, float y, float z);
      void subtract(float x, float y, float z);
    
      void setX(float x);
      void setY(float y);
      void setZ(float z);

      float getX();
      float getY();
      float getZ();
  };
}

#endif