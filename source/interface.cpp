///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "interface.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 560,320 ), wxDefaultSize );

	wxBoxSizer* main_sizer;
	main_sizer = new wxBoxSizer( wxVERTICAL );

	notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	projects_pane = new wxPanel( notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* projectSizer;
	projectSizer = new wxBoxSizer( wxVERTICAL );

	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2 = new wxStaticText( projects_pane, wxID_ANY, wxT("Projects"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	gbSizer1->Add( m_staticText2, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	projectsList = new wxListCtrl( projects_pane, wxID_HARDDISK, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxLC_SINGLE_SEL );
	gbSizer1->Add( projectsList, wxGBPosition( 1, 0 ), wxGBSpan( 1, 3 ), wxALL|wxEXPAND, 5 );

	wxBoxSizer* pManSizer;
	pManSizer = new wxBoxSizer( wxHORIZONTAL );

	removeProjBtn = new wxButton( projects_pane, wxID_DELETE, wxT(" Remove from list"), wxDefaultPosition, wxDefaultSize, 0 );
	pManSizer->Add( removeProjBtn, 0, wxALL, 5 );

	add_new_proj = new wxButton( projects_pane, wxID_NEW, wxT("Create New"), wxDefaultPosition, wxDefaultSize, 0 );
	pManSizer->Add( add_new_proj, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	add_existing_proj = new wxButton( projects_pane, wxID_ADD, wxT("Add Existing"), wxDefaultPosition, wxDefaultSize, 0 );
	pManSizer->Add( add_existing_proj, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gbSizer1->Add( pManSizer, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxEXPAND|wxALIGN_RIGHT, 5 );


	gbSizer1->AddGrowableCol( 1 );
	gbSizer1->AddGrowableRow( 1 );

	projectSizer->Add( gbSizer1, 1, wxEXPAND, 5 );


	projects_pane->SetSizer( projectSizer );
	projects_pane->Layout();
	projectSizer->Fit( projects_pane );
	notebook->AddPage( projects_pane, wxT("Projects"), false );
	installs_pane = new wxPanel( notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridBagSizer* iManSizer;
	iManSizer = new wxGridBagSizer( 0, 0 );
	iManSizer->SetFlexibleDirection( wxBOTH );
	iManSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText5 = new wxStaticText( installs_pane, wxID_ANY, wxT("Detected Installations"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	iManSizer->Add( m_staticText5, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText6 = new wxStaticText( installs_pane, wxID_ANY, wxT("Install Search Paths"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	iManSizer->Add( m_staticText6, wxGBPosition( 2, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	installsList = new wxListCtrl( installs_pane, wxID_FLOPPY, wxDefaultPosition, wxDefaultSize, wxLC_LIST|wxLC_SINGLE_SEL );
	iManSizer->Add( installsList, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	installsPathsList = new wxListCtrl( installs_pane, wxID_FLOPPY, wxDefaultPosition, wxDefaultSize, wxLC_LIST|wxLC_SINGLE_SEL );
	iManSizer->Add( installsPathsList, wxGBPosition( 3, 0 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_button5 = new wxButton( installs_pane, wxID_FIND, wxT("Add Location"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button5, 0, wxALL|wxEXPAND, 5 );

	m_button6 = new wxButton( installs_pane, wxID_CLEAR, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button6, 0, wxALL|wxEXPAND, 5 );


	iManSizer->Add( bSizer4, wxGBPosition( 3, 1 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_button8 = new wxButton( installs_pane, wxID_ANY, wxT("Install New"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button8, 0, wxALL|wxEXPAND, 5 );

	m_button9 = new wxButton( installs_pane, wxID_ANY, wxT("Modify"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button9, 0, wxALL|wxEXPAND, 5 );

	m_button10 = new wxButton( installs_pane, wxID_ANY, wxT("Uninstall"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button10, 0, wxALL|wxEXPAND, 5 );


	iManSizer->Add( bSizer5, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxEXPAND, 5 );


	iManSizer->AddGrowableCol( 0 );
	iManSizer->AddGrowableRow( 1 );
	iManSizer->AddGrowableRow( 3 );

	installs_pane->SetSizer( iManSizer );
	installs_pane->Layout();
	iManSizer->Fit( installs_pane );
	notebook->AddPage( installs_pane, wxT("Editor Versions"), false );

	main_sizer->Add( notebook, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( main_sizer );
	this->Layout();
	menubar = new wxMenuBar( 0 );
	menuFile = new wxMenu();
	wxMenuItem* quit_menu;
	quit_menu = new wxMenuItem( menuFile, wxID_EXIT, wxString( wxT("Close") ) + wxT('\t') + wxT("Ctrl-W"), wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( quit_menu );

	wxMenuItem* about_menu;
	about_menu = new wxMenuItem( menuFile, wxID_ABOUT, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( about_menu );

	wxMenuItem* pref_menu;
	pref_menu = new wxMenuItem( menuFile, wxID_PREFERENCES, wxString( wxT("Preferences") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( pref_menu );

	wxMenuItem* changeEditorVersion;
	changeEditorVersion = new wxMenuItem( menuFile, wxID_REPLACE, wxString( wxT("Change Editor Version") ) + wxT('\t') + wxT("Ctrl-E"), wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( changeEditorVersion );

	menubar->Append( menuFile, wxT("File") );

	this->SetMenuBar( menubar );


	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}

CreateProjectDialog::CreateProjectDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 350,230 ), wxDefaultSize );

	wxGridBagSizer* gbSizer3;
	gbSizer3 = new wxGridBagSizer( 0, 0 );
	gbSizer3->SetFlexibleDirection( wxBOTH );
	gbSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Project Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	gbSizer3->Add( m_staticText9, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	projNameTxt = new wxTextCtrl( this, wxID_ANY, wxT("New Unity Project"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !projNameTxt->HasFlag( wxTE_MULTILINE ) )
	{
	projNameTxt->SetMaxLength( 32 );
	}
	#else
	projNameTxt->SetMaxLength( 32 );
	#endif
	gbSizer3->Add( projNameTxt, wxGBPosition( 0, 1 ), wxGBSpan( 1, 2 ), wxALL|wxEXPAND, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Location"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	gbSizer3->Add( m_staticText10, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	projLocTxt = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	gbSizer3->Add( projLocTxt, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	chooseProjLocBtn = new wxButton( this, wxID_OPEN, wxT("Choose..."), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( chooseProjLocBtn, wxGBPosition( 1, 2 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Select Template for Version:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gbSizer3->Add( m_staticText11, wxGBPosition( 2, 0 ), wxGBSpan( 1, 2 ), wxALL, 5 );

	wxArrayString unityVersionChoiceChoices;
	unityVersionChoice = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, unityVersionChoiceChoices, 0 );
	unityVersionChoice->SetSelection( 0 );
	gbSizer3->Add( unityVersionChoice, wxGBPosition( 2, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	templateCtrl = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_LIST|wxLC_SINGLE_SEL );
	gbSizer3->Add( templateCtrl, wxGBPosition( 3, 0 ), wxGBSpan( 1, 3 ), wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	cancelProjBtn = new wxButton( this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( cancelProjBtn, 0, wxALL, 5 );

	createProjBtn = new wxButton( this, wxID_FILE, wxT("Create"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( createProjBtn, 0, wxALL, 5 );


	gbSizer3->Add( bSizer6, wxGBPosition( 4, 1 ), wxGBSpan( 1, 2 ), wxEXPAND|wxALIGN_RIGHT, 5 );


	gbSizer3->AddGrowableCol( 1 );
	gbSizer3->AddGrowableRow( 3 );

	this->SetSizer( gbSizer3 );
	this->Layout();

	this->Centre( wxBOTH );
}

CreateProjectDialog::~CreateProjectDialog()
{
}
