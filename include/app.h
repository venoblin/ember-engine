#ifndef APP_H
#define APP_H

#include "window.h"

namespace Engine
{
  class App : public Ui::Window
  { 
    public:
      App();
      App(const char* title);
      App(const char* title, int width, int height);
  };
}

#endif