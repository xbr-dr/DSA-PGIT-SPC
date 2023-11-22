#include<stdio.h>

void main()
{
	int j=1,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The Table of given Number is:\n");
		while(j<=20)
		{
		printf("%d * %d = %d\n",n, j, n*j);
		j++;
		}
}
