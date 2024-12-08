#ifndef OBJECT_H
#define OBJECT_H

#include <SDL2/SDL.h>

class Object {
  private:
    int width;
    int height;
    float x;
    float y;
    float z;
    SDL_Rect collider;
    
  public:
    Object(int width, int height, float x, float y, float z);

    void setSize(int width, int height);
    void setPosition(float x, float y, float z);

    int getWidth() const;
    int getHeight() const;
    float getX() const;
    float getY() const;
    float getZ() const;
    SDL_Rect getCollider() const;
};

#endif