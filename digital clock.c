#include<stdio.h>
#include<conio.h>
void main()
{
	int h=0,m=0,s=0;
	double i;
	printf("enter time in fomat HH MM SS");
	scanf("%d%d%d",h,m,s);
	start:;
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				
				printf("\t\t\t\t\t\t\t\t\t\t\t\t %d:%d:%d",h,m,s);
				for(i=0;i<99999;i++)
				{
					i++;
					i--;
				}
			}
		}
	}
	goto start;
	getch();
}
