#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

namespace debug
{
  /**
  * Logs to the console
  */
  class Log
  {
    public:
      std::string msg;
      
      // Default constructor with blank message
      Log() : msg("") {}
      // Constructor with message argument
      Log(std::string argMsg) : msg(argMsg) {}
  };
}

#endif
