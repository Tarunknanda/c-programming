#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int color;
 	printf("enter color code");
 	scanf("%d",&color);
 	if(color==1)
 	{
 		printf("saffron\n");
 		goto end;
	 }
	 if(color==2)
 	{
 		printf("white\n");
 		goto end;
	 }
	 if(color==3)
 	{
 		printf("Gree\n");
 		goto end;
	 }
	 printf("invalid color code\n");	
	 
	 end:printf("Thank you\n");
 }
 
