#include<stdio.h>
#include<conio.h>
void arr(int b[5])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("%d \n",b[i]);
		sum=sum+b[i];
	
	}
	printf("sum is=%d",sum);
	
}
void main()
{
	int a[5],j;
	printf("enter 5 element in array");
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[j]);
	}
	arr(a);
	getch();
}
