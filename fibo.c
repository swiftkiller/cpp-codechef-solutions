#include<stdio.h>
#include<stdlib.h>
long long int fibo(n)
{
	if(n<=1)
	{
		//printf("%d\n",n);
		return n;
	}
	else
	{
		printf("%d\n",fibo(n-1)+fibo(n-2));
		return fibo(n-1)+fibo(n-2);
	}
}

main()
{
	long long int f,n,i=0;
	scanf("%d",&n);
	f=fibo(n);
	printf("%lld",f);
}
