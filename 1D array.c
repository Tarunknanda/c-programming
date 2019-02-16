#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i;
for(i=0;i<=9;i++)
{
	printf("enter the number whis is store in a[%d] cell",i);
		scanf("%d",&a[i]);
}
	for(i=0;i<=9;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	getch();
	
	
}
