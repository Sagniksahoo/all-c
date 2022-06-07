#include<stdio.h>
int main()
{
	int n,m,positive=0,nagative=zeros=0;
	
	while(1)
	{
		printf("do you want to continue 1 to yes 0 to no: ");
		scanf("%d",&n);
		
		if(n==0)
		break;
		else
		{
			printf("enter a number: ");
			scanf("%d",&m);
			if(m>0)
			positive++;
			else if(m<0)
			nagative++;
			else
			zeros++;
		}
	}
	printf("\n positive:%d \n nagative:%d \n zeros:%d",positive,nagative,zeros);
	return 0;
}
