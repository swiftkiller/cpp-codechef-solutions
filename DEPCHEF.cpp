#include<iostream>

using namespace std;

int main()
{
	int t,n,i,s,a[3][100];
	cin>>t;
	while(t--)
	{
		s=-1;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[0][i];
		for(i=0;i<n;i++)
			cin>>a[1][i];
		a[2][0]=a[0][1]+a[0][n-1];
		a[2][n-1]=a[0][0]+a[0][n-2];
		for(i=1;i<n-1;i++)
			a[2][i]=a[0][i-1]+a[0][i+1];
		for(i=0;i<n;i++)	
			if(a[1][i]>a[2][i])
				if(a[1][i]>s)	
					s=a[1][i];					
		cout<<s<<"\n";	
	}	
	return 0;
}
