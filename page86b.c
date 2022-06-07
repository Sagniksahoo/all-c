#include<stdio.h>
int main()
{
	int fact=1,n,num;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("THE FACTORIAL VALUE OF %d IS %d",n,fact);
	return 0;
}
