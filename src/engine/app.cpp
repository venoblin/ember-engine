#include "app.h"
#include "window.h"
#include <iostream>

using namespace Engine;

App::App() : App::Window() {}
App::App(const char* title) : App::Window(title) {}
App::App(const char* title, int width, int height) : App::Window(title, width, height) {}
