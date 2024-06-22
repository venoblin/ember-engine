#ifndef COLLIDER_H
#define COLLIDER_H

#include <SDL2/SDL.h>
#include "vector3.h"

namespace Physics
{
  class Collider
  {
    private:
      SDL_Rect _rectangle;
      float _width;
      float _height;
      Math::Vector3 _position;

      void setUpRect();

    public:
      Collider(float width, float height);
      Collider(float width, float height, Math::Vector3 position);

      SDL_Rect getRectangle();
  };
}

#endif