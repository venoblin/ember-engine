#include "window.h"
#include "mainFrame.h"

using namespace Ui;

bool Window::OnInit()
{
  MainFrame *mainFrame = new MainFrame();
  mainFrame->Show();
  return true;
}
