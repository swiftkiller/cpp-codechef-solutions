#include<iostream>

using namespace std;

int main()
{
	long long int t,n,c,a,b,k,x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>k;
		x=n/a;
		y=n/b;
		if(a%b==0)
			c=y-x;
		else if(b%a==0)
			c=x-y;
		else
		{
			z=n/(a*b);
			c=(x+y-(2*z));
		}
		if(k<=c)
		
			cout<<"Win"<<"\n";
		else 
			cout<<"Lose"<<"\n";			
		
	}	
	
	return 0;
}
