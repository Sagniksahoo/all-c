#include<stdio.h>
#include<math.h>
int power(int a,int b);//function prototype
int main()
{
	int a,b,res;
	printf("enter the values of a and b:  ");
	scanf("%d %d",&a,&b);
	res=power(a,b);//function calling
	printf("results:=%d",res);
	return 0;
}
int power(int a,int b)
{
	int x;
	x=pow(a,b);
	return (x);
}
