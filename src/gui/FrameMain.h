// -*- C++ -*- generated by wxGlade 0.6.3

#include <wx/wx.h>
#include <wx/image.h>

#ifndef FRAMEMAIN_H
#define FRAMEMAIN_H

// begin wxGlade: ::dependencies
#include <wx/splitter.h>
#include <wx/notebook.h>
// end wxGlade

// begin wxGlade: ::extracode
#include "bitmapFromMem.h"
#ifndef ICON_XPM
#define ICON_XPM
#include "res/icon.xpm"
#endif
#include "res/connect.png.h"
#include "res/disconnect.png.h"
#include "res/fullscreen.png.h"
#include "res/screenshot.png.h"
#include "evtids.h"

// end wxGlade


class FrameMain: public wxFrame {
public:
    // begin wxGlade: FrameMain::ids
    // end wxGlade

    FrameMain(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: FrameMain::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: FrameMain::attributes
    wxStaticBox* sizer_3_staticbox;
    wxStaticBox* sizer_bookmarks_staticbox;
    wxStaticBox* sizer_services_staticbox;
    wxMenuBar* frame_main_menubar;
    wxStatusBar* frame_main_statusbar;
    wxToolBar* frame_main_toolbar;
    wxListBox* list_box_services;
    wxPanel* splitwin_left_pane_1;
    wxListBox* list_box_bookmarks;
    wxPanel* splitwin_leftlower_pane_1;
    wxStaticText* label_fps;
    wxTextCtrl* text_ctrl_fps;
    wxStaticText* label_latency;
    wxTextCtrl* text_ctrl_latency;
    wxPanel* splitwin_leftlower_pane_2;
    wxSplitterWindow* splitwin_leftlower;
    wxPanel* splitwin_left_pane_2;
    wxSplitterWindow* splitwin_left;
    wxPanel* splitwin_main_pane_1;
    wxNotebook* notebook_connections;
    wxPanel* splitwin_main_pane_2;
    wxSplitterWindow* splitwin_main;
    wxPanel* panel_top;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    virtual void machine_connect(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_listen(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_disconnect(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_showlog(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_preferences(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_screenshot(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_save_stats_upd(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_save_stats_lat(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void machine_exit(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_toggletoolbar(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglediscovered(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglebookmarks(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglestatistics(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void view_togglefullscreen(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void bookmarks_add(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void help_contents(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void help_about(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_services_dclick(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_services_select(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_bookmarks_dclick(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void listbox_bookmarks_select(wxCommandEvent &event); // wxGlade: <event_handler>
}; // wxGlade: end class


#endif // FRAMEMAIN_H
