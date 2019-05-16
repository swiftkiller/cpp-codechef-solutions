#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s[100000];
		int i;
		cin>>n;	
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int count=1,a,osum=1,sum=s[0];
		while(sum<n-1)
		{
			if(count==1)
				a=sum+1;
			else 
				a=sum+i;	
			for(i=osum;i<a;i++)
			{
				sum+=s[i];
			}
			osum=i;
			count++;
		}	
		cout<<count<<"\n";
	}
	return 0;
}
