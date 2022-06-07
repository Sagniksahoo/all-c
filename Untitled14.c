#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("ENTER THE VALUE OF A: ");
	scanf("%d",&a);
    printf("ENTER THE VALUE OF B: ");
	scanf("%d",&b);
	
	c=pow(a,b);
	printf("%d RAISED TO THE POWER %d : %d",a,b,c);
	return 0;
}
