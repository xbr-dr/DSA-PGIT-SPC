#include<stdio.h>
void main()
{
	int arr[10],i,temp,j;
	printf("Enter the elements of an array\n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<9;i++)
	{
	for(j=i+1;j<10;j++)
	{
		if(arr[i]>arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
	}
	for(i=0;i<10;i++)
	printf("%d\t",arr[i]);
}
