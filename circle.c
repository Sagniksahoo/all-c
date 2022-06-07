#include<stdio.h>
int main()
{
	float l,b,r,rarea,rperi,carea,ccircum;
	printf("enter the length and breadth:  ");
	scanf("%f %f",&l,&b);
	printf("enter the radius of the circle: ");
	scanf("%f",&r);
	
	rarea=l*b;
	rperi=2*(l+b);
	
	carea=22/7*r*r;
	ccircum=2*22/7*r;
	
	printf("\n rarea:%f",rarea);
	printf("\n rperi:%f",rperi);
	printf("\n carea:%f",carea);
	printf("\n ccircum:%f",ccircum);
	return 0;
	
}
