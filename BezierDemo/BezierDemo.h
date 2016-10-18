// BezierDemo.h : main header file for the BEZIERDEMO application
//

#if !defined(AFX_BEZIERDEMO_H__AF32FC84_27A9_4905_ABA3_55640A363125__INCLUDED_)
#define AFX_BEZIERDEMO_H__AF32FC84_27A9_4905_ABA3_55640A363125__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoApp:
// See BezierDemo.cpp for the implementation of this class
//

class CBezierDemoApp : public CWinApp
{
public:
	CBezierDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBezierDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBezierDemoApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEZIERDEMO_H__AF32FC84_27A9_4905_ABA3_55640A363125__INCLUDED_)
