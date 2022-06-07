#include<stdio.h>
int main()
{
	float d,m,feet,in,cm;
	printf("enter the distance: ");
	scanf("%f",&d);
	m=d*1000;
	feet=d*3280;
	in=d*39370.079;
	cm=d*1000000;
	printf("\nm:%f",m);
	printf("\nfeet:%f",feet);
	printf("\nin:%f",in);
	printf("\ncm:%f",cm);
	return 0;
}
