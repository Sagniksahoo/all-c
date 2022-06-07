#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	//second method
	//c=pow(a,b)
	c=1;
	x=b;
	while(b!=0)
	{
		c=c*a;
		b=b-1;
	}
	printf("%d raised to the power %d : %d\n",a,x,c);
	return 0;
}
