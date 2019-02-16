#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,*p,i,*q,sum=0;
	printf("enter the size of an array");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("error:out of memory");
		exit(0);
	}
	q=p;
	printf("enter the elements for an array");
	for(i=1;i<=n;i++)
	{
		scanf("%d",p);
		sum=sum+*p;
		p++;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",*p);
		*p++;	
    }
    printf("\n addition=%d",sum);
    getch();
}
