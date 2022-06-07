#include<stdio.h>
int main()
{
	int num,on,r,n=0;
	float sum=0;
	printf("enter the number: ");
	scanf("%d",&num);
	on=num;
	for(on=num;on!=0;on=on/10)
	{
		r=on%10;
		sum=sum+(r*r*r);
	}
	if(sum==num)
	  printf("%d is an aramstrong",num);
	else
	  printf("%d is not an aramstrong",num);
	return 0;    
}
