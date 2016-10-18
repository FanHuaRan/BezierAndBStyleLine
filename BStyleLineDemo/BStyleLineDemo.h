// BStyleLineDemo.h : main header file for the BSTYLELINEDEMO application
//

#if !defined(AFX_BSTYLELINEDEMO_H__9019408E_2DD9_4FB4_92C9_3BE4CECBEEBA__INCLUDED_)
#define AFX_BSTYLELINEDEMO_H__9019408E_2DD9_4FB4_92C9_3BE4CECBEEBA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoApp:
// See BStyleLineDemo.cpp for the implementation of this class
//

class CBStyleLineDemoApp : public CWinApp
{
public:
	CBStyleLineDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBStyleLineDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBStyleLineDemoApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSTYLELINEDEMO_H__9019408E_2DD9_4FB4_92C9_3BE4CECBEEBA__INCLUDED_)
