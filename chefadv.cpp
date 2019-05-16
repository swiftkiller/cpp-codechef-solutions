#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long int f=0,n,m,x,y;
		cin>>n>>m>>x>>y;
		n--;
		m--;
		if((n%x==1 && m!=0) || (m%y==1 && n!=0))
		{
			m--;
			n--;
		}
		if(n%x==0 && m%y==0)
			cout<<"Chefirnemo"<<"\n";
		else 
			cout<<"Pofik"<<"\n";
	}
	
	return 0;
}
