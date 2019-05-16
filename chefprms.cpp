#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,j,s[47]={2, 3, 5, 7 , 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
		int a[100],b=0,d;
		for(i=0;i<5;i++)
		{
			for(j=i+1;;j++)
			{
				d=s[i]*s[j];
				if(d>=200)
					break;
				a[b++]=d;				
			}
		}

		int f=0;
		for(i=0;i<b;i++)
		{
			for(j=i;j<b;j++)
			if((a[i]+a[j])==n)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<"NO\n";
		if(f==1)
			cout<<"YES\n";	
	}
	return 0;
}
