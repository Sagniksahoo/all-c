#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,d;
	printf("enter the lotitude and longitude: ");
	scanf("%f %f",&l1, &g1);
	printf("enter the lotitude and longitude: ");
	scanf("%f %f",&l2,&g2);
	d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
	printf("\n d: %f",d);
	return 0;
}
