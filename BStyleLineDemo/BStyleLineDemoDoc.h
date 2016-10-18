// BStyleLineDemoDoc.h : interface of the CBStyleLineDemoDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSTYLELINEDEMODOC_H__F4C089F0_18B9_450B_B095_80C48EB6A8E9__INCLUDED_)
#define AFX_BSTYLELINEDEMODOC_H__F4C089F0_18B9_450B_B095_80C48EB6A8E9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBStyleLineDemoDoc : public CDocument
{
protected: // create from serialization only
	CBStyleLineDemoDoc();
	DECLARE_DYNCREATE(CBStyleLineDemoDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBStyleLineDemoDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBStyleLineDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBStyleLineDemoDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSTYLELINEDEMODOC_H__F4C089F0_18B9_450B_B095_80C48EB6A8E9__INCLUDED_)
