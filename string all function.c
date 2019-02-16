#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main()
 {
 	char name[60],ch[60],ch1[60];
 	printf("enter string");
 	gets(name);
 	printf("enter another string");
 	gets(ch1);
 	printf("string lenght:%d",strlen(name));
 	printf("\n");
 	printf("string revers:%s",strrev(name));
 	printf("\n string revers:%s",strrev(name));
 	printf("\n");
 	strcpy(ch,name);
 	printf("copy of the string is %s",ch);
 	printf("\n");
 	strcat(name,ch1);
 	printf("concatination of string is %s",name);
 	if(strcmp(name,ch1)==0)
 	printf("\n string are equal");
 	else
 	printf("\n string are not equal");
 	printf("\n lower case of string is %s",strlwr(ch1));
 	printf("\n upper case of string is %s",strupr(name));
 	getch();
 }
