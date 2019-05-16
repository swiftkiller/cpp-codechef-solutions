#include<iostream>

using namespace std;

int main()
{
	long long int t,n,x,s,a,b;
	cin>>t;
	for(int j = 0;j<t;j++)
	{
		cin>>n>>x>>s;
		for(int i=0; i<s;i++)
		{
			cin>>a>>b;
			if(x==a)
				x=b;
			else if(x==b)
				x=a;			
		}
		cout<<x;
		
	}	
	return 0;
}
