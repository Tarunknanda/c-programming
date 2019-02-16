#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter  a number ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d num  is even number ",num);
	}
	else
	{
	    printf("%d num  is odd number ",num);	
	}
	
	getch();
}
