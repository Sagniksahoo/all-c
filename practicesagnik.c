#include<stdio.h>
int main()
{
	int n,sum=0,m,r;
	printf("enter the number: ");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==m)
	 printf("%d is armstrong\n",m);
	else
	 printf("%d is not an arnstrong\n",m);
	 return 0; 
}
