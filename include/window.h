#ifndef WINDOW_H
#define WINDOW_H

#include <wx/wx.h>

namespace Ui
{
  class Window : public wxApp 
  {
    public:
      bool OnInit() override;
  };
}

#endif