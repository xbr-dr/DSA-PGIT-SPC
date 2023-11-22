#include<stdio.h>

void main()
{
	int i,j,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The Table of given Number is:\n");
	for(i=n;i<=n;i++)
	{
		for(j=0;j<=100;j++)
		{
		printf("%d * %d = %d\n",i, j, i*j);
		}
	}
}
