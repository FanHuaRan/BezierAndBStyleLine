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
////B����������Bezier�������ƣ������Ľ���Bezier�����޷����ֲ��޸ĵ�ȱ��
///B�������ߵĽ״β�����Bezier����һ�����ڶ�����-1��������Ϊָ��
///����m+n+1������ ����B���������� ���Թ���m+1��n������ ÿ��������n+1������ȷ��
///��Ϊ�����ж������ƴ�Ӷ��ɣ����Զ������ֲ��޸ıȽϼ�

//����tֵ�����������ȡ����B�������ߵĵ�
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
//����tֵ���ĸ������ȡ�Ľ�B�������ߵĵ�
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
//����t�ı仯ֵ��3������ �����öζ���B��������
void BStyleClass::DrawBStyle(CClientDC *dc, CPoint p0, CPoint p1, CPoint p2,double dt)
{
	double t=0;
	CPoint tempPoint;
	CPoint oldPoint;
	bool isFirst=true;//B�������߲�����ʼ�㣡��������
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
//����t�ı仯ֵ���ĸ����� �����ö�����B��������
void BStyleClass::DrawBStyle(CClientDC *dc, CPoint p0, CPoint p1, CPoint p2,CPoint p3,double dt)
{
	double t=0;
	CPoint tempPoint=p0;
	CPoint oldPoint=tempPoint;
	bool isFirst=true;//B�������߲�����ʼ�㣡��������
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
//n���������points�Ƕ��㼯�ϣ�dt��t�ı仯��Χ
BOOL BStyleClass::DrawBStyles(CClientDC *dc,vector<CPoint> points,int n,double dt)
{
	if(dt<0||dt>1)
		return false;
	int point_lenth=points.size();
	if(point_lenth<n+1)
		return false;
	//��˹���B�������� ����=������-����+1
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

