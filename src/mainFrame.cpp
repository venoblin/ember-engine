#include "mainFrame.h"

using namespace Ui;

enum
{
    ID_Hello = 1
};

MainFrame::MainFrame () : wxFrame(nullptr, wxID_ANY, "Hello World") 
{
  wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl+H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
 
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
 
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
 
    SetMenuBar(menuBar);
 
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
    
    Bind(wxEVT_MENU, &MainFrame::onHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MainFrame::onAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MainFrame::onExit, this, wxID_EXIT);
}

void MainFrame::onExit(wxCommandEvent& event)
{
  Close(true);
}

void MainFrame::onAbout(wxCommandEvent& event)
{
  wxMessageBox("This is a wxWidgets Hello World example", "About Hello World", wxOK | wxICON_INFORMATION);
}

void MainFrame::onHello(wxCommandEvent& event)
{
  wxLogMessage("Hello world from wxWidgets!");
}