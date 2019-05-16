#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int x,y,z,temp,n;
    long long int count=0,t[a.size()];
    for(int i=0;i<a.size();i++)
	{
	    if(a[i]=='0')
	    t[i]=++n;
	    else
	    t[i]=n;
	}
    for(int i=0; i<a.size(); i++)
    {
    	x = a[i]-48;
    	
    	if(x==8)
		{
			count++;		
		}
		if((i+1)<a.size())
		{
			y = a[i+1]-48;
			
			temp=x*10 + y;
			if((temp%8)==0)
			{
				count++;
			}
		}
		if((i+2)<a.size())
		{
			z = a[i+2]-48;
			temp=x*100 + y*10 + z;
			if((temp%8)==0)
			{
				count = count + i + 1 - t[i];
			}
			
		}
	}
	cout<<count;
    return 0;
}


