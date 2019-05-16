#include<iostream>

using namespace std
;

int main()
{
	int t,n,i,j,count,c[2][26]={0};
	cin>>t;
	char b,a[201];
	while(t--)
	{
		for(i=0;i<26;i++)
			{
				c[1][i]=0;
				c[0][i]=0;
			}
		count=0;
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>a;
			for(i=0;a[i]!='\0';i++)
			{
				int temp=a[i]-97;
				if(c[1][temp]==0)
				{
					c[0][temp]++;
					c[1][temp]=1;
				}
			}
		/*	for(i=0;i<26;i++)
				cout<<c[1][i];
		*/	
			for(i=0;i<26;i++)
				c[1][i]=0;
		}
		for(i=0;i<26;i++)
			if(c[0][i]==n)
			{
				count++;
		//		cout<<(char)(i+97)<<c[0][i]<<" ";
			}
		cout<<count<<"\n";		
	}
	return 0;
}
