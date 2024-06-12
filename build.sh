#!/bin/bash

if ! [ -d "build" ]; then
  mkdir build
fi

g++ -o build/engine src/main.cpp src/vector3.cpp