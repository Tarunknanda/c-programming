#include<stdio.h>
#include<conio.h>
void add(void);
void main()
{
	add();
	getch();
}
void add(void)
{
	int a,b,c;
	printf("enter value for a");
	scanf("%d",&a);
	printf("enter value for b");
	scanf("%d",&b);
	c=a+b;
	add();	
}
