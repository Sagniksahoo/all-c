#include<stdio.h>
int add(int,int);//function prototype
int arearect(int,int);//function prototype
int main()
{
	int a=20,b=30,sum;
	sum=add(a,b);//function calling
	printf("sum=%d\n",sum);
	
	int l=2,c=3,area;
	area=arearect(l,c);//function calling
	printf("area=%d\n",area);
	return 0;
}
int add(int m, int n)//function definition
{
	return (m+n);
}
int arearect(int length,int breadth)//function definition
{
	int area;
	area=length*breadth;
	return area;
}
