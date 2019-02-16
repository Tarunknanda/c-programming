#include<stdio.h>
#include<conio.h>
int sqr(void);
int sqr()
{
	int a,b,c;
	printf("enter a vaalue for a");
	scanf("%d",&a);
	printf("enter a vaalue for b");
	scanf("%d",&b);
	c=a+b;
	return c;
}
void main()
{
	int d;
	d=sqr();
	printf("\n sum of two number is=%d",d);
	getch();
}
