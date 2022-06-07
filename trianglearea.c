#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area,h;
	printf("enter the three sides value: ");
	scanf("%d %d %d",&a, &b, &c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	h=2*a/c;
	printf("area: %f",area);
	printf("h: %f",h);
	return 0;
}
