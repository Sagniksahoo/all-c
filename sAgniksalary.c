#include<stdio.h>
int main()
{
	float s,d,r,gs;
	printf("enter the salary:");
	scanf("%f",&s);
	d=0.4*s;
	r=0.2*s;
	gs=s+d+r;
		printf("gs:%f",gs);
		return 0;
}
