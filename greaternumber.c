#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	printf("enter the value of c: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
	     printf("\n a=%d is greater",a);
	    else
		 printf("\n c=%d is greater",c); 
	}
	else
	{
		if(b>c)
		printf("\n b=%d is greater",b);
		else
		printf("\n c=%d is greatrer",c);
	}
	return 0;
}

