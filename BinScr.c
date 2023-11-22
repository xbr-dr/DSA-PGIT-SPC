#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,num,mid,f,l,flag=0;
	printf("Enter the elements of an array\n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("Enter the element to be searched\n");
	scanf("%d",&num);
	f=0;
	l=9;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(num==arr[mid])
		{
			flag=1;
			break;
		}
		if(num<arr[mid])
		l=mid-1;
		else
		f=mid+1;
	}
	if(flag==1)
	   printf("Element found at %d th position",mid+1);
	else
	   printf("Element not found in the list");
}
