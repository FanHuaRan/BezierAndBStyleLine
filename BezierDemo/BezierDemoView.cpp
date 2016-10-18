// BezierDemoView.cpp : implementation of the CBezierDemoView class
//

#include "stdafx.h"
#include "BezierDemo.h"
#include "BezierMath.h"
#include "BezierDemoDoc.h"
#include "BezierDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoView

IMPLEMENT_DYNCREATE(CBezierDemoView, CView)

BEGIN_MESSAGE_MAP(CBezierDemoView, CView)
	//{{AFX_MSG_MAP(CBezierDemoView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoView construction/destruction

CBezierDemoView::CBezierDemoView()
{
	// TODO: add construction code here

}

CBezierDemoView::~CBezierDemoView()
{
}

BOOL CBezierDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoView drawing

void CBezierDemoView::OnDraw(CDC* pDC)
{
	CBezierDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	CPoint point1(25,78);
	CPoint point2(300,589);
	CPoint point3(500,300);
	CPoint point4(400,250);
	bezier.DrawBezier(&dc,point1,point2,point3,point4,0.001);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoView printing

BOOL CBezierDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBezierDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBezierDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoView diagnostics

#ifdef _DEBUG
void CBezierDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CBezierDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBezierDemoDoc* CBezierDemoView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBezierDemoDoc)));
	return (CBezierDemoDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBezierDemoView message handlers
