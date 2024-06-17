#include "window.h"
#include <string>

using namespace Ui;

Window::Window() : _title("Undefined"), _width(640), _height(480) {}
Window::Window(std::string title, int width, int height) : _title(title), _width(width), _height(height) {}