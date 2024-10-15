// Clipboard.h : main header file for the CLIPBOARD application
//

#if !defined(AFX_CLIPBOARD_H__68D12D95_815D_4E1C_B606_B180D802323E__INCLUDED_)
#define AFX_CLIPBOARD_H__68D12D95_815D_4E1C_B606_B180D802323E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CClipboardApp:
// See Clipboard.cpp for the implementation of this class
//

class CClipboardApp : public CWinApp
{
public:
	CClipboardApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClipboardApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	//{{AFX_MSG(CClipboardApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIPBOARD_H__68D12D95_815D_4E1C_B606_B180D802323E__INCLUDED_)
