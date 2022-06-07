#include<stdio.h>
#include<math.h>
int power(int,int);//function prototype
int main()
{
	int a,b,result;
	printf("enter the values of a and b:  ");
	scanf("%d %d",&a,&b);
	result=power(a,b);
	printf("results:=%d",result);
	return 0;
}
int power(int a,int b)//function definition
{
	int x;
	x=pow(a,b);
	return (x);
}
