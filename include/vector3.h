#ifndef VECTOR3_H
#define VECTOR3_H

namespace engine
{
  /**
  * Vector3 data structure with x, y, and z coordinates
  */
  struct Vector3
  {
    public:
      float x;
      float y;
      float z;

      // Default constructor
      Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
      // Constructor with arguments 
      Vector3(float argX, float argY, float argZ) : x(argX), y(argY), z(argZ) {}

      void add(float argX, float argY, float argZ);
      void subtract(float argX, float argY, float argZ)
  };
}

#endif