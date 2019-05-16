#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,z,j,c,d;
		float t,sum=0;
		char a[100][21];
		cin>>n;
		for(i=0;i<n;i++)
		{
			t=0.2;
			cin>>a[i];
			for(z=1;a[i][z]!='\0';z++)
			{
				if(a[i][z-1]=='d' || a[i][z-1]=='f')
					c=0;
				else if(a[i][z-1]=='j' || a[i][z-1]=='k')
					c=1;
				if(a[i][z]=='d' || a[i][z]=='f')
					d=0;
				else if(a[i][z]=='j' || a[i][z]=='k')
					d=1;
				if(c==d)
					t+=0.4;
				else 
					t+=0.2;					
			}
			for(j=0;j<i;j++)
			{
				if(strcmp(a[i],a[j])==0)
				{
					t = t/2;		
					break;
				}
			}		
			sum += t;
		}	
		printf("%.0f",sum*10);
		cout<<"\n";
	}
	return 0;
}
