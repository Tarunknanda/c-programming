#include<stdio.h>
#include<conio.h>
struct student
{
  int roll;
  char name[10];
  int mark[5];
}ta;
void main()
{
	int i,sum=0;
	float per;
	printf("enter the roll number");
	scanf("%d",&ta.roll);
	printf("\n enter the name of the student");
	scanf("%s",&ta.name);
	printf("\n enter the 5 subject number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ta.mark[i]);
		sum=sum+ta.mark[i];
		if(sum<=500)
		{
		per=(sum*100)/500;	
		}	
	}
	for(i=0;i<5;i++)
	{
	 printf("\n the mark are=%d",ta.mark[i]);	
	}
	printf("\n Name=%s",ta.name);
	    printf("\n Roll number=%d",ta.roll);
			printf("\n sum of the mark=%d",sum);
				printf("\n percentage of the student=%f",per);
	getch();
}
