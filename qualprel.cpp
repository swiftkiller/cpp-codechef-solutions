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
		sort(s,s+n);
		int count= k;
		for(i=n-k-1;i>=0;i--)
		{
			if(s[n-k]==s[i])
			count++;
		}
		cout<<count<<"\n";	
	}
	return 0;
}
