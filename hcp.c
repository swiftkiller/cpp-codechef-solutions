#include<stdio.h>

int hcf(int n1,int n2)
{
	if(n2%n1==0)
		return n1;
	else
		return hcf(n2%n1,n1);	
	
}

main()
{
	int n1,n2,n;
	scanf("%d%d",&n1,&n2);
	n=hcf(n1,n2);
	printf("%d",n);
	
}
