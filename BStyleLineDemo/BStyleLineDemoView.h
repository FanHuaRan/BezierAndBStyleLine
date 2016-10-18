// BStyleLineDemoView.h : interface of the CBStyleLineDemoView class
//
/////////////////////////////////////////////////////////////////////////////
#include "BStyleClass.h"
#if !defined(AFX_BSTYLELINEDEMOVIEW_H__5E729553_253B_4884_882E_41598D3D8833__INCLUDED_)
#define AFX_BSTYLELINEDEMOVIEW_H__5E729553_253B_4884_882E_41598D3D8833__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBStyleLineDemoView : public CView
{
protected: // create from serialization only
	CBStyleLineDemoView();
	DECLARE_DYNCREATE(CBStyleLineDemoView)

// Attributes
public:
	CBStyleLineDemoDoc* GetDocument();
	BStyleClass B_styleMath;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBStyleLineDemoView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBStyleLineDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBStyleLineDemoView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BStyleLineDemoView.cpp
inline CBStyleLineDemoDoc* CBStyleLineDemoView::GetDocument()
   { return (CBStyleLineDemoDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSTYLELINEDEMOVIEW_H__5E729553_253B_4884_882E_41598D3D8833__INCLUDED_)
