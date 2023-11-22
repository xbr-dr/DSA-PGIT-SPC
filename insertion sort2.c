#include<stdio.h>
void main()
{
	int n, arr[1000],c,t,d,flag=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter %d integers into the array\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	for(c=1;c<=n-1;c++)
	{
		t=arr[c];
	
	for(d=c-1;d>=0;d--)
	{
		if(arr[d]>t)
		{
			arr[d+1]=arr[d];
			flag=1;
		}
		else
		break;
	}
	if (flag)

		arr[d+1]=t;
	}
	printf("Sorted list in ascending order is:\n");
	for(c=0;c<n+1;c++)
	{
		printf("%d\n",arr[c]);
	}
}
