#include<stdio.h>
#include<math.h>
int main()
{
	int num,on,r,n=0;
	float sum=0.0;
	printf("enter the number: ");
	scanf("%d",&num);
	on=num;
	for(on=num;on!=0;++n)
	{
		on/=10;
	}
	for(on=num;on!=0;on/=10)
	{
		r=on%10;
		sum+=pow(r,n);
	}
	if(sum==num)
	 printf("%d is a armstrong",num);
	else
	 printf("%d is not a aramstrong",num);
	return 0;  
}
