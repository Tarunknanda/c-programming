#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	printf("enter a number");
	scanf("%d",&x);
	
	do
{
	
	printf(" %d \n",(x*x));
	printf("\a");
	x++;
	
}
    while(1);
	getch();	
}
