#include<iostream>

using namespace std;

int main()
{
	char a[1000000];
	cin>>a;
	for(int i=0;a[i]!="\0";i++);
	long long int count=0;
	for(int j=0;j<i;j++)
	{
		if(a[j]%8==0)
		count++;		
	}
	for(int j=0;j<i-1;j++)
	{
		
	}
	
	return 0;
}
