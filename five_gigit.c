#include<stdio.h>
int main()
{
	int num,rev,a,b,c,d,e,d1,d2,d3,d4,d5;
	printf("enter the five digits number: ");
	scanf("%d",&num);
	a=num/10;
	d5=num%10;
	b=a/10;
	d4=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d2=c%10;
	e=d/10;
	d1=d%10;
	rev=d5*10000+d4*1000+d3*100+d2*10+d1*1;
	printf("rev: %d",rev);
	return 0;
}
