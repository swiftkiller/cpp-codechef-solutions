#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int x=3,y,z;
	cout<<x<<endl;
	cin>>y;
	if((x==1 && y==2) || (y==1 && x==2))
	cout<<3<<endl;
	if((x==2 && y==3) || (y==2 && x==3))
	cout<<1<<endl;
	if((x==1 && y==3) || (y==1 && x==3))
	cout<<2<<endl;
	
	
	return 0;
}
