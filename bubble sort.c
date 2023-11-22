#include<stdio.h>
void main()
{
	int arr[10],i,temp,j;
	printf("Enter the elements of an array\n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<9;i++)
	{
	for(j=0;j<9-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		}
	}
	}
	for(i=0;i<10;i++)
	printf("%d\t",arr[i]);
}
