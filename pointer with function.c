#include<stdio.h>
#include<conio.h>
void add(int*,int*);
void sub(int*,int*);
void mul(int*,int*);
void div(int*,int*);
void main()
{
	int a,b;
	printf("enter the value for a");
	scanf("%d",&a);
	printf("enter the  value for b");
	scanf("%d",&b);
	add(&a,&b);
	sub(&a,&b);
	mul(&a,&b);
	div(&a,&b);
	getch();
}
void add(int *x,int *y)
{
	int i;
	i=*x+*y;
	printf("\n addition of two number is=%d",i);
}
void sub(int *x,int *y)
{
	int i;
	i=*x-*y;
	printf("\n subtraction of two number is=%d",i);
}
void mul(int*x,int*y)
{
	int i;
	i=*x**y;
	printf("\n multiplication of two number is=%d",i);
}
void div(int *x,int *y)
{
	int i;
	i=*x\*y;
	printf("\n divition of two number is=%d",i);
}


