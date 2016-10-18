// BStyleClass.h: interface for the BStyleClass class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSTYLECLASS_H__68F505B0_3028_4AD2_ADB1_EA492BC74EA5__INCLUDED_)
#define AFX_BSTYLECLASS_H__68F505B0_3028_4AD2_ADB1_EA492BC74EA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class BStyleClass  
{
public:
	BOOL DrawBStyles(CClientDC *dc,vector<CPoint> points,int n,double dt);
	BStyleClass();
	virtual ~BStyleClass();
private:
	void DrawBStyle(CClientDC *dc,CPoint p0,CPoint p1,CPoint p2,double dt);
	void DrawBStyle(CClientDC *dc, CPoint p0, CPoint p1, CPoint p2,CPoint p3,double dt);
	CPoint GetBStylePoint(CPoint p0, CPoint p1, CPoint p2, CPoint p3,double t);
	CPoint GetBStylePoint(CPoint p0,CPoint p1,CPoint p2,double t);

};

#endif // !defined(AFX_BSTYLECLASS_H__68F505B0_3028_4AD2_ADB1_EA492BC74EA5__INCLUDED_)
