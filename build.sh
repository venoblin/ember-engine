#!/bin/bash

# Checks if build directory exists if not it is created
if ! [ -d "build" ]; then
  mkdir build
fi

# Builds project
cmake .
make

# Moves executable to build directory
mv src/engine build