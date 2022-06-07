#include<stdio.h>
int main()
{
	int n,sum=0,r,m;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==m)
	  printf("armstrong");
	else
	  printf("not armstrong");
	return 0;    
}
