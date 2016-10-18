// BStyleLineDemoDoc.cpp : implementation of the CBStyleLineDemoDoc class
//

#include "stdafx.h"
#include "BStyleLineDemo.h"

#include "BStyleLineDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoDoc

IMPLEMENT_DYNCREATE(CBStyleLineDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CBStyleLineDemoDoc, CDocument)
	//{{AFX_MSG_MAP(CBStyleLineDemoDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoDoc construction/destruction

CBStyleLineDemoDoc::CBStyleLineDemoDoc()
{
	// TODO: add one-time construction code here

}

CBStyleLineDemoDoc::~CBStyleLineDemoDoc()
{
}

BOOL CBStyleLineDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoDoc serialization

void CBStyleLineDemoDoc::Serialize(CArchive& ar)
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
// CBStyleLineDemoDoc diagnostics

#ifdef _DEBUG
void CBStyleLineDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBStyleLineDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoDoc commands
