#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,j,a[51],a1[51],t,t1,k;
		int b[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47},b1[15]={0};
		cin>>n;
		//taking input
		for(i=0;i<n;i++)
		{
			a1[i]=0;
			cin>>a[i];
		}
		//checking all the prime present
		for(i=0;i<n;i++)
		{
			for(j=0;b[j]<=a[i];j++)
			{
				if(a[i]%b[j]==0)
					b1[j]=1;
			}		
		}
		//checkking co primes
		for(i=0;i<n;i++)
		{
			{
				for(j=i+1;j<n;j++)
				{
					k=1;
					for(t=0;b[t]<=a[i] && b[t]<=a[j];t++)
					{
						if(a[i]%b[t]==0 && a[j]%b[t]==0)
						{
							k=0;
							break;
						}
					}
					if(k==1)
					{
						a1[i]=1;
						a1[j]=1;
					}
				}
			}
		}
		//checking with which prime
		for(i=0;i<15;i++)
		{
			if(b1[i]==0)
			{
				t1=i;
				break;
			}
		}
		t=0;
		//checking which to change
		for(i=0;i<n;i++)
		{
			if(a1[i]==0)
			{
				a[i]=b[t1];
				t=1;
				break;
			}
		}
		
		//final
		cout<<t<<"\n";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
