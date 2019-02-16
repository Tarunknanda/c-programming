#include<stdio.h>
#include<conio.h>
void tarun(int*x,int *y)
{
	printf("sum is %d",*x+y);
}
void main()
{
	int a,b;
	printf("enter a number\n");
	printf("enter another number\n");
	tarun(&a,&b);
	getch();
}


