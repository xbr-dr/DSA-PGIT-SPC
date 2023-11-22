#include<stdio.h>

void main()
{
	int i,j,n;
	printf("Enter any no.:\n");
	scanf("%d",&n);
	printf("the table of given no. is:\n");
	for(i=n;i<=n;i++)
	{
		for(j=0;j<=20;j++)
		{
		printf("%d * %d =%d\n",i, j, i*j);
		}
	}
}
