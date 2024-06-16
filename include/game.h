#ifndef GAME_H
#define GAME_H

namespace Engine
{
  class Game
  {
    private:
      bool _isRunning;
    
    public:
      Game();

      void run();
      void stop();
      void setIsRunning(bool b);
  };
}

#endif