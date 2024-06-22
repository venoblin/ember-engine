#ifndef COLLIDER_H
#define COLLIDER_H

namespace Physics
{
  class Collider
  {
    private:
      float _width;
      float _height;
    
    public:
      Collider(float width, float height);
  };
}

#endif