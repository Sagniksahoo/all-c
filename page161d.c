#include<stdio.h>
int fun(int  *,int *,int *);
int main()
{
	int x=5,y=8,z=10;
	fun(&x,&y,&z);
	printf("y=%d ,z=%d ,x=%d",x,y,z);
	return 0;
}
int fun(int *a,int *b,int *c)
{
	*a=5;
	*b=8;
	*c=10;
}
