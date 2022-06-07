#include<stdio.h>
int add(int ,int);
int main()
{
	int a=10,b=20;
	int sum;
	sum=add(a,b);
	printf("summation =%d,sum");
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return (c);
}
