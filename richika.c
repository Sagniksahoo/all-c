#include<stdio.h>
int swap(int *,int *);//function prototype
int main()
{
	int a,b;
	while (1)
	{
	printf("\nenter the values of a and b: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a:%d b%d",a,b);
    }
    return 0;
}
int swap(int *x,int *y)//function definition
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
