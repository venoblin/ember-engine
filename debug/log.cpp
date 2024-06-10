#include "log.h"
#include <iostream>
#include <string>

namespace debug
{
  class Log
  {
    public:
      std::string msg;

      Log() : msg("")
      {
        std::cout << msg << std::endl;
      }

      Log(std::string argMsg) : msg(argMsg)
      {
        std::cout << msg << std::endl;
      }
  };
}