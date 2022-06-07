#include<stdio.h>
int factorial(int ,int);
int main()
{
	int n,fact;
	printf("enter any number: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial is =%d",n);
	return 0;
}
int factorial(int fact,int a)
{
	int i;
	for(i=a;i>=1;i--)
	fact=fact*i;
	return (fact);
}
