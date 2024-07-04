#ifndef APP_H
#define APP_H

#include "window.h"
#include <functional>

namespace Engine
{
  class App : public Ui::Window
  { 
    public:
      App(const char* title, int width, int height);

      std::function<void()> start() override;
      std::function<void()> update() override;
  };
}

#endif