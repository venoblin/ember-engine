#!/bin/bash

if ! [ -d "build" ]; then
  mkdir build
fi

cmake .
make

mv src/engine build