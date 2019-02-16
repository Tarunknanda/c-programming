#include<stdio.h>
#include<conio.h>
int add(int x,int y)
{
	int c;
	c=x+y;
	printf("sum is =%d",c);
	return c;
}
void mul(int z)
{
	int m;
	m=z*z;
	printf("\n multiplication=%d",m);
}
void main()
{
	int a,b,d;
	printf("enter for a value");
	scanf("%d",&a);
	printf("enter for b value");
	scanf("%d",&b);
	printf("enter for d value");
	scanf("%d",&d);
	add(a,b);
	mul(d);	
}
