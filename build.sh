#!/bin/bash

if ! [ -d "build" ]; then
  mkdir build
fi

cmake .
make

mv src/engine build

echo "Built project in build directory!"