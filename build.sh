#!/bin/bash

if ! [ -d "build" ]; then
  mkdir build
fi

cd build/ && cmake ../ && make

echo "Built engine in build directory."

