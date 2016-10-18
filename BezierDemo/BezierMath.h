// BezierMath.h: interface for the BezierMath class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BEZIERMATH_H__91026265_F0EA_4FD9_BDC7_E4E14FEADC0B__INCLUDED_)
#define AFX_BEZIERMATH_H__91026265_F0EA_4FD9_BDC7_E4E14FEADC0B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class BezierMath  
{
public:
	BOOL DrawBezier(CClientDC *dc,CPoint p0,CPoint p1,double t);
	BOOL DrawBezier(CClientDC *dc,CPoint p0,CPoint p1,CPoint p2,double t);
	BOOL DrawBezier(CClientDC *dc,CPoint p0,CPoint p1,CPoint p2,CPoint p3,double t);
	CPoint BezierPoint(CPoint p0,CPoint p1,double t);
	CPoint BezierPoint(CPoint p0, CPoint p1,CPoint p2,double t);
	CPoint BezierPoint(CPoint p0, CPoint p1,CPoint p2,CPoint p3,double t);
	BezierMath();
	virtual ~BezierMath();

};

#endif // !defined(AFX_BEZIERMATH_H__91026265_F0EA_4FD9_BDC7_E4E14FEADC0B__INCLUDED_)
