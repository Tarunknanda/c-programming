#include<stdio.h>
#include<conio.h>
void main()
{
	int num=1,sum=0;
	while(num>=0)
	{
		printf("enter the number");
		scanf("%d",&num);
		if(num<0)
		break;
		if(num==0)
		continue;
		sum+=num;
		num++;
	}
	printf("Total=%d",sum);
	getch();
}
