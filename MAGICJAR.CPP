#include<iostream>

using namespace std;

int main()
{
	int t,n,a[100005],i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int sum = 0;
		for(i =0;i<n;i++)
		{
			cin>>a[i];
			sum+=(a[i]-1);
		}
		cout<<sum+1<<"\n";		
		
	}
	return 0;
}
