#include<stdio.h>
int main()
{
	float l,b,a,p;
	printf("enter the length: ");
	scanf("%f",&l);
	printf("enter the breadth: ");
	scanf("%f",&b);
	a=(l*b);
	p=2*(l+b);
	
	if(a>p)
	  printf("\n area %f is greater than its perimeter%f",a,p);
	else
	  printf("\n area %f is not greater than its perimeter%f",a,p);
	return 0;    
}
