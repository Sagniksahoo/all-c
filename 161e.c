#include<stdio.h>
#include<math.h>
void sarea(int ,int ,int ,float *,float *);
int main()
{
	int a,b,c;
	float s,area;
	printf("enter the three sides of the triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	sarea(a,b,c,&s,&area);
	
	printf("s=%f\n",s);
	printf("area=%f\n",area);
	return 0;
}
void sarea(int x,int y,int z,float *s,float *area)
{
	*s=(x+y+z)/2.0;
}
