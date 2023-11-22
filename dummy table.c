#include<stdio.h>

void main()
{
	int j,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The Table of given Number is:\n");
		for(j=0;j<=100;j++)
		{
		printf("%d * %d = %d\n",n, j, n*j);
		}
}
