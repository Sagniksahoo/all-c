#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter the angle: ");
	scanf("%d",&a);
	printf("enter the angle: ");
	scanf("%d",&b);
	printf("enter the angle: ");
	scanf("%d",&c);
	
	sum=(a+b+c);
	
	if(sum==180)
	 printf("the triangle is valid");
	else
	 printf("the triangle is not valid");
	 
	return 0;  
}
