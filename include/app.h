#ifndef APP_H
#define APP_H

namespace Engine
{
  class App
  {
    private:
      bool _isRunning;
    
    public:
      App();

      int run();
      void stop();
      void setIsRunning(bool b);
  };
}

#endif