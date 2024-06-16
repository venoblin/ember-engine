#ifndef VECTOR3_H
#define VECTOR3_H

namespace Engine
{
  class Vector3
  {
    private:
      float x_;
      float y_;
      float z_;

    public:
      Vector3();
      Vector3(float x, float y, float z);

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