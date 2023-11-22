#include<stdio.h>
#include<string.h>
void main()
{
	int s1, s2, s3;
	char str1[20],str2[20],str3[20],str4[20],str5[20];
	printf("enter string elements of first string\n");
	gets(str1);
	printf("Enter string elements of second string \n");
	gets(str2);
	s1=strlen(str1);
	s2=strlen(str2);
	printf("The length of first string is %d\n",s1);
	printf("The length of second string is %d\n",s2);
	printf("The joined string is\n");
	puts(strcat(str1,str2));
	printf("the copied string of the joined string is\n");
	puts(strcpy(str3,str1));
	printf("the reversed string of joined string is\n");
	puts(strrev(str1));
	printf("Enter another lower case string\n");
	gets(str4);
	printf("the upper case of the string is:\n");
	puts(strupr(str4));
	printf("Enter another upper case string\n");
	gets(str5);
	printf("the lower case of joined string is:\n");
	puts(strlwr(str5));
}
