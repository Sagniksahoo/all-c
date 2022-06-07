#include<stdio.h>
int main()
{
	float a,b,c;
	int s;
	printf("enter the three valus: ");
	scanf("%d %d %d",&a,&b,&c);
	s=a*b*c/100+32/4-3*1.1;
	printf("\n s: %d",s);
	return 0;
}
