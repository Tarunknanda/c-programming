#include<stdio.h>
#include<conio.h>
void sqr(int,int);
void main()
{
	int a,b;
	printf("enter a vaalue for a");
	scanf("%d",&a);
	printf("enter a vaalue for b");
	scanf("%d",&b);
	sqr(a,b);
	getch();
}
void sqr(int x,int y)
{
	int c;
	c=x+y;
	printf("\n sum of two number is=%d",c);
	
}
