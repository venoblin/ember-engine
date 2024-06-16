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

      bool isRunning();
  }
}

#endif