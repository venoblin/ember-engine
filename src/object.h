#ifndef OBJECT_H
#define OBJECT_H

class Object {
  private:
    int _width;
    int _height;
    float _x;
    float _y;
    float _z;
  public:
    Object();
    Object(int width, int height);
    Object(int width, int height, float x, float y, float z);

    void setSize(int width, int height);
    void setPosition(float x, float y, float z);

    int getWidth();
    int getHeight();
    float getX();
    float getY();
    float getZ();
};

#endif