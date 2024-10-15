; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMainFrame
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "clipboard.h"
LastPage=0

ClassCount=4
Class1=CChildView
Class2=CClipboardApp
Class3=CAboutDlg
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX

[CLS:CChildView]
Type=0
BaseClass=CScrollView
HeaderFile=ChildView.h
ImplementationFile=ChildView.cpp
Filter=C
VirtualFilter=VWC
LastObject=ID_STRECH

[CLS:CClipboardApp]
Type=0
BaseClass=CWinApp
HeaderFile=Clipboard.h
ImplementationFile=Clipboard.cpp
Filter=N
VirtualFilter=AC
LastObject=CClipboardApp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=Clipboard.cpp
ImplementationFile=Clipboard.cpp
LastObject=CAboutDlg

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
VirtualFilter=fWC
LastObject=CMainFrame

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_CB_DELETE
Command2=ID_CB_CHAIN
Command3=ID_FILE_PRINT
Command4=ID_APP_ABOUT
CommandCount=4

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_PRINT
Command3=ID_FILE_PRINT_PREVIEW
Command4=ID_FILE_PRINT_SETUP
Command5=ID_APP_EXIT
Command6=ID_CB_DELETE
Command7=ID_CB_CHAIN
Command8=ID_CB_FORMAT00
Command9=ID_VIEW_TOOLBAR
Command10=ID_VIEW_STATUS_BAR
Command11=ID_EXPAND
Command12=ID_STRECH
Command13=ID_CB_HEXA
Command14=ID_CB_NCTEXT
Command15=ID_SOUND
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_EDIT_PASTE
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_CUT
Command10=ID_EDIT_UNDO
CommandCount=10

