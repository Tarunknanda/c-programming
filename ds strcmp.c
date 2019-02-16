#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[10],str2[10];
	printf("enter the string");
	gets(str1);
	printf("entre the second string");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("string are equal");
	}
	else
	{
		printf("string are not equal");
	}
	getch();
}
