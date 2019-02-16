#include<stdio.h>
#include<conio.h>
void main()
{
	int a=100;
	int *p;
	p=&a;
	printf("the value of a is=%d",a);
	printf("\n the value of a is=%d",*p);
	printf("\n the adress of a is=%x",p);
	getch();
}
