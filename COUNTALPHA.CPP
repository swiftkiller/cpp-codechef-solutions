#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;

int main()
{
	int t;
	char s[1000001];
	cin>>t;
	while(t--)
	{
		int temp,change,len,i,j,sum1,sum2,sum3,sum4,un,mult;
		un=0;
		int b[26]={0},c[26]={0};
		int a[26]={0};
		cin>>s;
		len=strlen(s);
		for(i=0;i<len;i++)						//arranging
		{
			temp=s[i]-'A';
			a[temp]++;
		}
		
		for(i=0;i<26;i++)						//sorting large to small
			for(j=i+1;j<26;j++)
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			
		for(i=0;i<26;i++)						//unique count
			if(a[i]!=0)
				un++;
					
		temp=a[0];
		int f=0;				
		for(i=0;i<26 && a[i]!=0;i++)			//checkinng if already
			if(a[i]!=temp)
				f=1;
		if(f==0)
		{
			cout<<0<<"\n";						
			continue;		
		}
			j=0;
			for(i=1;i<=26;i++)					//noteing multiples
			{
				if(len%i==0)
				{
					b[j++]=i;
				}		
			}
			
			temp=j;								////further check
			for(i=0;i<temp;i++)
			{
				sum2=0;
				sum3=0;
				sum4=0;
				mult=len/b[i];
				if(b[i]<un)						//if required row less than unique nos.
				{
					for(j=un-1;j>=b[i];j--)
						sum2+=a[j];
					for(j=0;a[j]>mult;j++)
						sum2+=(a[j]-mult);
					c[i]=sum2;
				}
				else if(b[i]==un)
				{
					for(j=0;j<un;j++)
					{
						if((a[j]-mult)>0)
							sum3+=(a[j]-mult);
					}
					c[i]=sum3;
				}
				else if(b[i]>un)	
				{
					for(j=0;a[j]>mult;j++)
						sum4+=(a[j]-mult);
					c[i]=sum4;	
				}
			}
			int ans=c[0];
			for(i=1;i<temp;i++)
				if(ans>c[i])
					ans=c[i];
			if(ans==0)
				cout<<len-a[0]<<"\n";
			else
				cout<<ans<<"\n";	
			
	}
	return 0;
}
