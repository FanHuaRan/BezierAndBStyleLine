// BezierDemoView.h : interface of the CBezierDemoView class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#if !defined(AFX_BEZIERDEMOVIEW_H__9D319837_CEF3_42BF_A822_C5E3DE7579CC__INCLUDED_)
#define AFX_BEZIERDEMOVIEW_H__9D319837_CEF3_42BF_A822_C5E3DE7579CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBezierDemoView : public CView
{
protected: // create from serialization only
	CBezierDemoView();
	DECLARE_DYNCREATE(CBezierDemoView)

// Attributes
public:
	CBezierDemoDoc* GetDocument();
	BezierMath bezier;
// Operations
public:
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBezierDemoView)
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
	virtual ~CBezierDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBezierDemoView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BezierDemoView.cpp
inline CBezierDemoDoc* CBezierDemoView::GetDocument()
   { return (CBezierDemoDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEZIERDEMOVIEW_H__9D319837_CEF3_42BF_A822_C5E3DE7579CC__INCLUDED_)
