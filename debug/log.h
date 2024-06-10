#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

namespace debug
{
  class Log
  {
    public:
      std::string msg;
      
      Log() : msg("") {}
      
  };
}

#endif
