#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double r;
	int num,q,p;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter  the power");
	scanf("%d",&p);
	 r=sqrt(num);
	 q=pow(num,p);
	printf("the squar root of number is =%f\n",r);
	printf("the power of number is =%d\n",q);

}
