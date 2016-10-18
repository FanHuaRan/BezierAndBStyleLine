// BStyleClass.cpp: implementation of the BStyleClass class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "BStyleLineDemo.h"
#include "BStyleClass.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

BStyleClass::BStyleClass()
{

}

BStyleClass::~BStyleClass()
{

}
////B样条曲线与Bezier曲线相似，不过改进了Bezier曲线无法做局部修改的缺点
///B样条曲线的阶次不是像Bezier曲线一样等于顶点数-1，而是认为指定
///给定m+n+1个顶点 按照B样条基函数 可以构建m+1段n阶曲线 每阶曲线由n+1个顶点确定
///因为其是有多段曲线拼接而成，所以对其做局部修改比较简单

//根据t值和三个顶点获取二阶B样条曲线的点
CPoint BStyleClass::GetBStylePoint(CPoint p0, CPoint p1, CPoint p2, double t)
{
	CPoint point(0,0);
	double f0=(t-1)*(t-1)/2;
	double f1=(-2*t*t+2*t+1)/2;
	double f2=t*t/2;
	point.x=(int)(f0*p0.x+f1*p1.x+f2*p2.x);
	point.y=(int)(f0*p0.y+f1*p1.y+f2*p2.y);
	return point;
}
//根据t值和四个顶点获取四阶B样条曲线的点
CPoint BStyleClass::GetBStylePoint(CPoint p0, CPoint p1, CPoint p2, CPoint p3, double t)
{
	CPoint point(0,0);
	double f0=(t*t*t*(-1)+3*t*t-3*t+1)/6;
	double f1=(3*t*t*t-6*t*t+4)/6;
	double f2=(3*t*t*t*(-1)+3*t*t+3*t+1)/6;
	double f3=t*t*t/6;
	point.x=(int)(f0*p0.x+f1*p1.x+f2*p2.x+f3*p3.x);
	point.y=(int)(f0*p0.y+f1*p1.y+f2*p2.y+f3*p3.y);
	return point;
}
//根据t的变化值和3个顶点 画出该段二阶B样条曲线
void BStyleClass::DrawBStyle(CClientDC *dc, CPoint p0, CPoint p1, CPoint p2,double dt)
{
	double t=0;
	CPoint tempPoint;
	CPoint oldPoint;
	bool isFirst=true;//B样条曲线不过起始点！！！！！
	while(t<=1)
	{
		tempPoint=GetBStylePoint(p0,p1,p2,t);
		if(isFirst==true)
		{
			oldPoint=tempPoint;
		}
		dc->MoveTo(oldPoint);
		dc->LineTo(tempPoint);
		oldPoint=tempPoint;
		isFirst=false;
		t+=dt;
	}
}
//根据t的变化值和四个顶点 画出该段三阶B样条曲线
void BStyleClass::DrawBStyle(CClientDC *dc, CPoint p0, CPoint p1, CPoint p2,CPoint p3,double dt)
{
	double t=0;
	CPoint tempPoint=p0;
	CPoint oldPoint=tempPoint;
	bool isFirst=true;//B样条曲线不过起始点！！！！！
	while(t<=1)
	{
		tempPoint=GetBStylePoint(p0,p1,p2,p3,t);
		if(isFirst==true)
		{
			oldPoint=tempPoint;
		}
		dc->MoveTo(oldPoint);
		dc->LineTo(tempPoint);
		oldPoint=tempPoint;
		isFirst=false;
		t+=dt;
	}
}
//n代表阶数，points是顶点集合，dt是t的变化范围
BOOL BStyleClass::DrawBStyles(CClientDC *dc,vector<CPoint> points,int n,double dt)
{
	if(dt<0||dt>1)
		return false;
	int point_lenth=points.size();
	if(point_lenth<n+1)
		return false;
	//逐端构建B样条曲线 段数=顶点数-阶数+1
	for(int i=0;i<point_lenth-n;i++)
	{
		if(n==2)
		{
			DrawBStyle(dc,points[i],points[i+1],points[i+2],dt);
		}
		else if(n==3)
		{
		    DrawBStyle(dc,points[i],points[i+1],points[i+2],points[i+3],dt);
		}
		else
			return false;
	}
	return true;
}

