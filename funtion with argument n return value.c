#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("enter a vaalue for a");
	scanf("%d",&a);
	printf("enter a vaalue for b");
	scanf("%d",&b);
	add(a,b);
	getch();
}
int add(int x,int y)
{
	int d;
	d=x+y;
	printf("\n sum of two number is=%d",d);
	return d;
}
