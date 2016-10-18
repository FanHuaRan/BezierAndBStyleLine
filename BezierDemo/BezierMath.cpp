// BezierMath.cpp: implementation of the BezierMath class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "BezierDemo.h"
#include "BezierMath.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

BezierMath::BezierMath()
{

}

BezierMath::~BezierMath()
{

}
///////Bezier曲线递推算法///////////
//一阶Bezier曲线根据两个控制点和t得到对应的曲线点
CPoint BezierMath::BezierPoint(CPoint p0, CPoint p1,double t)
{
	double point_x=0.0;
	double point_y=0.0;
	point_x=(1-t)*p0.x+t*p1.x;
	point_y=(1-t)*p0.y+t*p1.y;
	CPoint point((int)point_x,(int)point_y);
	return point;
}
//二阶Bezier曲线根据三个控制点和t得到对应的曲线点
CPoint BezierMath::BezierPoint(CPoint p0, CPoint p1,CPoint p2,double t)
{
	double point_x=0.0;
	double point_y=0.0;
	point_x=(1+t*t-2*t)*p0.x+2*(t-t*t)*p1.x+t*t*p2.x;
	point_y=(1+t*t-2*t)*p0.y+2*(t-t*t)*p1.y+t*t*p2.y;
	CPoint point((int)point_x,(int)point_y);
	return point;
}
//三阶Bezier曲线根据四个控制点和t得到对应的曲线点
CPoint BezierMath::BezierPoint(CPoint p0, CPoint p1,CPoint p2,CPoint p3,double t)
{
	double point_x=0.0;
	double point_y=0.0;
	point_x=(1-t)*(1-t)*(1-t)*p0.x+3*t*(1-t)*(1-t)*p1.x+3*t*t*(1-t)*p2.x+t*t*t*p3.x;
	point_y=(1-t)*(1-t)*(1-t)*p0.y+3*t*(1-t)*(1-t)*p1.y+3*t*t*(1-t)*p2.y+t*t*t*p3.y;
	CPoint point((int)point_x,(int)point_y);
	return point;
}
//绘制Bezier曲线 dt为t从0到1变化的范围
//t是从0到1
//dt越小 Bezier曲线精度越高
//算法负责度也就越高
BOOL BezierMath::DrawBezier(CClientDC *dc, CPoint p0, CPoint p1, double dt)
{
	if(dt<0||dt>1)
		return false;
	double t=0.0;
	CPoint tempPoint=p1;
	CPoint oldPoint=p0;
	while(t<=1)
	{
		tempPoint=BezierPoint(p0,p1,t);
		dc->MoveTo(oldPoint);
		dc->LineTo(tempPoint);
		oldPoint=tempPoint;
		t+=dt;
	}
	return true;
}

BOOL BezierMath::DrawBezier(CClientDC *dc, CPoint p0, CPoint p1,CPoint p2, double dt)
{
	if(dt<0||dt>1)
		return false;
	double t=0.0;
	CPoint tempPoint=p1;
	CPoint oldPoint=p0;
	while(t<=1)
	{
		tempPoint=BezierPoint(p0,p1,p2,t);
		dc->MoveTo(oldPoint);
		dc->LineTo(tempPoint);
		oldPoint=tempPoint;
		t+=dt;
	}
	return true;
}

BOOL BezierMath::DrawBezier(CClientDC *dc, CPoint p0, CPoint p1,CPoint p2,CPoint p3,double dt)
{
	if(dt<0||dt>1)
		return false;
	double t=0.0;
	CPoint tempPoint=p1;
	CPoint oldPoint=p0;
	while(t<=1)
	{
		tempPoint=BezierPoint(p0,p1,p2,p3,t);
		dc->MoveTo(oldPoint);
		dc->LineTo(tempPoint);
		oldPoint=tempPoint;
		t+=dt;
	}
	return true;
}