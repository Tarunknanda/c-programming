#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int num,sum=0;
 	
 	do{
 		printf("entre the positive number");
 		scanf("%d",&num);
 		
 		sum=sum+num;
	 }
	 while(num>=0);
	 printf("total=%d",sum);
 	
 }
