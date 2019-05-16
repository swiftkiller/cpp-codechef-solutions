#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,a,b,k;
		cin>>a>>b>>k;
		c=a+b;
		int d=c/k;
		if(d%2==0)
			cout<<"CHEF\n";
		else	
			cout<<"COOK\n";			
	}
	return 0;
}
