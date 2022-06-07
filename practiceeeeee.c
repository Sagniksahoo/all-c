#include<stdio.h>
int main()
{
	int i=1,sum=0;
	printf("first 100 numbers that are divisal by 3 and 5:  ");
	
	while(i<=100)
	{
		if((i%3==0)&&(i%5==0))
		{
			printf("\n%d",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\n%d is sum",sum);
	return 0;
}
