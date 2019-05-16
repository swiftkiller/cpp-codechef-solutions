#include<iostream>

using namespace std;

int main()
{
	int n,r,a;
	cin>>n>>r;
	while(n--)
	{
		cin>>a;
		if(a>=r)
		cout<<"Good boi\n";
		else if(a<r)
		cout<<"Bad boi\n";
	}
	
	return 0;
}
