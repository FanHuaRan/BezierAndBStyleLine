// BezierDemoDoc.h : interface of the CBezierDemoDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BEZIERDEMODOC_H__E66B64F4_AB3E_4AE1_88D6_B1A031C9E6A3__INCLUDED_)
#define AFX_BEZIERDEMODOC_H__E66B64F4_AB3E_4AE1_88D6_B1A031C9E6A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBezierDemoDoc : public CDocument
{
protected: // create from serialization only
	CBezierDemoDoc();
	DECLARE_DYNCREATE(CBezierDemoDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBezierDemoDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBezierDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBezierDemoDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEZIERDEMODOC_H__E66B64F4_AB3E_4AE1_88D6_B1A031C9E6A3__INCLUDED_)
