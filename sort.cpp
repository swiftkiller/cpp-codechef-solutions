#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s[100000],i;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n,greater<int>());
		int count=1,z=s[0];	
		for(i=1;i<n && count<=k;i++)			
		{
			if(s[0]!=s[i])
			{
				count++;
				s[0]=s[i];
				
			}
		}
		if(i==n)
			i++;
		cout<<i-1<<"\n";
	}	
	return 0;
}
