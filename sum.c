#include<stdio.h>
int main()
{
	int i=1,a=3,b=5,sum=0;
	printf("first 100 numbers that are divisal by 3 and 5:  ");
	while(i<=100)
	{
		if((i%a==0)&&(i%b==0))
		{
			printf("\n%d\n",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\n sum= %d",sum);
	return 0;
}
