#include<stdio.h>

void tower(int n,char from, char to, char aux)
{
	if(n==1)
	{
		printf("Move disk 1 from %c to %c\n",from,to);
		return;
	}
	tower(n-1, from, aux, to);
	printf("Move disk %d from %c to %c\n",n,from, to);
	tower(n-1,aux,to,from);
}

main()
{
	int n;
	scanf("%d",&n);
	tower(n,'A','C','B');
	
}
