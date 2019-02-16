#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main()
 {
 	char name[60];
 	printf("enter your name");
 	gets(name);
 	printf("string lenght:%d",strlen(name));
 	printf("string lenght:%s",strrev(name));
 }
