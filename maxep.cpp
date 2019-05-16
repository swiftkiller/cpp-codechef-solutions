#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,c,y,a=0,f=1,l=500;
	cin>>n>>c;
	for(;l<=n && a!=1;)
	{
		cout<<1<<" "<<l<<endl;
		cin>>a;
		l+=500;
		f+=500;
	}
	if(f!=1 && l>n)
	{
		l-=500;
		f-=500;

	}
		
	if(a==1)
	{
		cout<<2<<endl;
		a=0;
		l-=500;
		f-=500;

	}
	for(;f<=n && a!=1;)
	{
		cout<<1<<" "<<f<<endl;
		cin>>a;
		if(a!=1)
		f+=10;
	}
	if(f>n)
	{
		l-=10;
		f-=10;
	}
		
	if(a==1)
	{
		cout<<2<<endl;
		a=0;
		l-=10;
		f-=10;
	}
	for(;a!=1;f++)
	{ 
		if(f>0)
		{
			cout<<1<<" "<<f<<endl;	
			cin>>a;
		}	
	}
	cout<<2<<endl;
	cout<<3<<" "<<f-1;
	
	return 0;
}
