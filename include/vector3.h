#ifndef VECTOR3_H
#define VECTOR3_H

namespace Engine
{
  /**
  * Vector3 data structure with x, y, and z coordinates
  */
  class Vector3
  {
    public:
      float x;
      float y;
      float z;

      // Default constructor
      Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
      // Constructor with arguments 
      Vector3(float argX, float argY, float argZ) : x(argX), y(argY), z(argZ) {}

      // Adds to the Vector
      void add(float argX, float argY, float argZ);
      // Subtracts from the Vector
      void subtract(float argX, float argY, float argZ);
  };
}

#endif