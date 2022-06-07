#include<stdio.h>
void results(int ,int ,int ,int ,int ,float *,float *,float *);
int main()
{
	int a,b,c,d,e;
	float sum,average,standard;
	printf("enter five numbers: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	results(a,b,c,d,e,&sum,&average,&standard);
	
	printf("sum=%f\n",sum);
	printf("average=%f\n",average);
	printf("standard=%f\n",standard);
	return 0;
}
void results(int a,int b,int c,int d,int e,float *sum,float *average,float *standard)
{
	*sum=a+b+c+d+e;
	*average=(a+b+c+d+e)/5;
	*standard=(a+b+c+d+e)/4;
}
