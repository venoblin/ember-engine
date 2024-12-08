#!/bin/bash

if [ -d "build" ]; then
  ./build/EmberEngine
else
  echo "No build found! Run build.sh first."
fi 