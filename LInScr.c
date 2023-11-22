#include<stdio.h>
#include<conio.h>
void main() {
   int arr[10],num,i,flag=0;
   //clrscr();
   printf("Enter the elements of an array\n");
   for (i=0;i<10;i++)
   {
   	scanf("%d",&arr[i]);
   }
   printf("Enter the elements to be searched\n");
   scanf("%d",&num);
   for(i=0;i<10;i++)
   	if(num==arr[i]){
   		flag=1;
   	    break;
   	}
   if(flag==1)
   	printf("Element found at location %d",i++);
   else
   	printf("Element not found");
   getch();
}
