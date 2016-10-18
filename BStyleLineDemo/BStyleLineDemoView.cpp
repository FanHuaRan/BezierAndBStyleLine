// BStyleLineDemoView.cpp : implementation of the CBStyleLineDemoView class
//

#include "stdafx.h"
#include "BStyleLineDemo.h"
#include "BStyleClass.h"
#include "BStyleLineDemoDoc.h"
#include "BStyleLineDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoView

IMPLEMENT_DYNCREATE(CBStyleLineDemoView, CView)

BEGIN_MESSAGE_MAP(CBStyleLineDemoView, CView)
	//{{AFX_MSG_MAP(CBStyleLineDemoView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoView construction/destruction

CBStyleLineDemoView::CBStyleLineDemoView()
{
	// TODO: add construction code here

}

CBStyleLineDemoView::~CBStyleLineDemoView()
{
}

BOOL CBStyleLineDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoView drawing

void CBStyleLineDemoView::OnDraw(CDC* pDC)
{
	CBStyleLineDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	vector<CPoint> points;
	CPoint point1(250,420);
	CPoint point2(720,52);
	CPoint point3(105,100);
	CPoint point4(89,150);
	CPoint point5(125,142);
	points.push_back(point1);
	points.push_back(point2);
	points.push_back(point3);
	points.push_back(point4);
	points.push_back(point5);
	CClientDC dc(this);
	int n=2;
	double dt=0.001;
	B_styleMath.DrawBStyles(&dc,points,n,dt);
}

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoView printing

BOOL CBStyleLineDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBStyleLineDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBStyleLineDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoView diagnostics

#ifdef _DEBUG
void CBStyleLineDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CBStyleLineDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBStyleLineDemoDoc* CBStyleLineDemoView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBStyleLineDemoDoc)));
	return (CBStyleLineDemoDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBStyleLineDemoView message handlers
