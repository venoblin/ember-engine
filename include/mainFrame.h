#ifndef MAIN_FRAME_H
#define MAIN_FRAME_H

#include <wx/wx.h>

namespace Ui
{
  class MainFrame : public wxFrame
  {
    public:
      MainFrame();

    private:
      void onHello(wxCommandEvent& event);
      void onExit(wxCommandEvent& event);
      void onAbout(wxCommandEvent& event);
  }
}

#endif