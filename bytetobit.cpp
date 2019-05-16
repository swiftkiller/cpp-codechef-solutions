#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a=0,b=0,c=0,n,d,e;
		cin>>n;
		n--;
		d=n/26;
		e=n%26;
		if(e>=0 && e<2)
			a=pow(2,d);
		else if(e>=2 && e<10)
			b=pow(2,d);
		else if(e>=10 && e<26)
			c=pow(2,d);	
		cout<<a<<" "<<b<<" "<<c<<"\n";		
			
	}
	return 0;
}
