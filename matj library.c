#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	
 float a,b,c,e,f,g,h,i,j,k;
 int x,y;
	
	printf("enter the x value");
	scanf("%d",&x);
	printf("enter the y value");
	scanf("%d",&y);
	a=sqrt(x);
	printf("\n %f",a);
	b=pow(x,y);
	printf("\n %d",b);
	c=exp(y);
	printf("\n %f",c);
	e=log(x);
	printf("\n %f",e);
	f=sin(y);
	printf("\n %f",f);
	g=cos(x);
	printf("\n %f",g);
	h=tan(y);
	printf("\n %f",h);
	i=asin(x);
	printf("\n %f",i);
	j=acos(y);
	printf("\n %f",j);
	k=atan(x);
	printf("\n %f",k);
	
	
	getch();
	
}
