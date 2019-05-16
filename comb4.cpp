#include<iostream>

using namespace std;

int main()
{
	double h,w,x,y,up=0,lw=0;
	cin>>h>>w>>x>>y;
	int a1=h,a2=w,a3=x,a4=y;
	if(h<x || w<y)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	double a=h/w;
	double b=x/y;
	if(a>b)
	{
		lw=a2%a4;
		w-=lw;
		h=w*b;
	}
	else if(b>a)
	{
		up=a1%a3;
		h-=up;
		w=(h*y)/x;	
	}
	cout<<h<<" "<<w;	
	
	
	
	return 0;
}
