#include<stdio.h>
#include<conio.h>
#include<string.h>
void catstr(char str1[],char str2[]);
void main()
{
	char arr1[20],arr2[10];
	gets(arr1);
	gets(arr2);
	catstr(arr1,arr2);
}
void catstr(char str1[],char str2[])
{
	int i;
	while(str1[i]!='\0')
	{
	i++;
	}
	while(str2[i]!='\0')
	{
	str1[i]=str2[i];
	i++;
	}
	str1[i]='\0';
	puts(str1);
}
