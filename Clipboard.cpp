// Clipboard.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Clipboard.h"

#include "Options.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClipboardApp

BEGIN_MESSAGE_MAP(CClipboardApp, CWinApp)
	//{{AFX_MSG_MAP(CClipboardApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
//	ON_COMMAND(ID_FILE_PRINT_SETUP, CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClipboardApp construction

CClipboardApp::CClipboardApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CClipboardApp object

CClipboardApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CClipboardApp initialization

BOOL CClipboardApp::InitInstance()
{
   AfxEnableControlContainer();

   // Standard initialization
   // If you are not using these features and wish to reduce the size
   //  of your final executable, you should remove from the following
   //  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

   // Change the registry key under which our settings are stored.
   // TODO: You should modify this string to be something appropriate
   // such as the name of your company or organization.
   SetRegistryKey(_T("Free Tools"));
	LoadStdProfileSettings(0);// Load standard INI file options (not including MRU)
	SetOptions(GetProfileInt(_T("Settings"), _T("Options"), 0));

   // To create the main window, this code creates a new frame window
   // object and then sets it as the application's main window object.

   CMainFrame* pFrame = new CMainFrame;
   m_pMainWnd = pFrame;

   // create and load the frame with its resources

   pFrame->LoadFrame(IDR_MAINFRAME,
                     WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, NULL, NULL);

   // The one and only window has been initialized, so show and update it.
   pFrame->ShowWindow(SW_SHOW);
   pFrame->UpdateWindow();

   return TRUE;
}

int CClipboardApp::ExitInstance() 
{
   // Save Options Settings in Register
   WriteProfileInt(_T("Settings"), _T("Options"), GetOptions());
	return CWinApp::ExitInstance();
}
