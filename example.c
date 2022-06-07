#include<stdio.h>
int main()
{
	float a,b;
	printf("enter the value of 1st number: ");
	scanf("%f",&a);
	printf("enter the value of 2nd number:");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a: %f\n",a);
	printf("b: %f\n",b);
	return 0;
}
