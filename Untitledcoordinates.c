#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,th;
	const float pi=3.141592;
	printf("enter the cartesian co-ordinates: ");
	scanf("%f %f",&x, &y),
	r=sqrt(pow(x,2)+pow(y,2 ));
	th=atan(y/x);
	th=th*(180.0/pi);
	printf("\n r: %f th: %f",r,th);
	return 0;
}
