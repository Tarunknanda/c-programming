#include<stdio.h>
#include<conio.h>
void tarun(int x,int y)
{
	printf("sum is %d",x+y);
}
void main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter another number");
	scanf("%d",&b);
	tarun(a,b);
	getch();
}
