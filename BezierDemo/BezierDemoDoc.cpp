// BezierDemoDoc.cpp : implementation of the CBezierDemoDoc class
//

#include "stdafx.h"
#include "BezierDemo.h"

#include "BezierDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoDoc

IMPLEMENT_DYNCREATE(CBezierDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CBezierDemoDoc, CDocument)
	//{{AFX_MSG_MAP(CBezierDemoDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoDoc construction/destruction

CBezierDemoDoc::CBezierDemoDoc()
{
	// TODO: add one-time construction code here

}

CBezierDemoDoc::~CBezierDemoDoc()
{
}

BOOL CBezierDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBezierDemoDoc serialization

void CBezierDemoDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoDoc diagnostics

#ifdef _DEBUG
void CBezierDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBezierDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoDoc commands
