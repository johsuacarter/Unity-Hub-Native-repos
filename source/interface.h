///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/gbsizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/notebook.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define wxID_HARDDISK 1000
#define wxID_JUMP_TO 1001
#define OPEN_WITH 1002
#define wxID_FLOPPY 1003
#define wxID_RELOAD 1004
#define VERSIONS_LIST 1005

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxNotebook* notebook;
		wxPanel* projects_pane;
		wxListCtrl* projectsList;
		wxButton* revealProjBtn;
		wxButton* removeProjBtn;
		wxButton* add_new_proj;
		wxButton* add_existing_proj;
		wxButton* openWithBtn;
		wxPanel* installs_pane;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText6;
		wxListCtrl* installsList;
		wxListCtrl* installsPathsList;
		wxButton* m_button5;
		wxButton* m_button6;
		wxButton* launchHubBtn;
		wxButton* reloadInstalls;
		wxMenuBar* menubar;
		wxMenu* menuProject;
		wxMenu* menuWindow;

	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Unity Hub Native"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 560,320 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CreateProjectDialog
///////////////////////////////////////////////////////////////////////////////
class CreateProjectDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText9;
		wxTextCtrl* projNameTxt;
		wxStaticText* m_staticText10;
		wxTextCtrl* projLocTxt;
		wxButton* chooseProjLocBtn;
		wxStaticText* m_staticText11;
		wxChoice* unityVersionChoice;
		wxListCtrl* templateCtrl;
		wxButton* cancelProjBtn;
		wxButton* createProjBtn;

	public:

		CreateProjectDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Create a New Unity Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 350,230 ), long style = wxCAPTION|wxRESIZE_BORDER|wxSTAY_ON_TOP );
		~CreateProjectDialog();

};

///////////////////////////////////////////////////////////////////////////////
/// Class OpenWithEditorDlgBase
///////////////////////////////////////////////////////////////////////////////
class OpenWithEditorDlgBase : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText7;
		wxListCtrl* editorsListCtrl;
		wxButton* dlgCancel;
		wxButton* openBtn;

	public:

		OpenWithEditorDlgBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Set Editor Version"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxRESIZE_BORDER|wxSTAY_ON_TOP );
		~OpenWithEditorDlgBase();

};

