#!/bin/bash

# Checks if build directory exists if not it is created
if ! [ -d "build" ]; then
  mkdir build
fi

# Builds project
# g++ -o build/engine src/main.cpp src/vector3.cpp
cmake .
make