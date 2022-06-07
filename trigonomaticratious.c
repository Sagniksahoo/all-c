#include<stdio.h>
#include<math.h>
int main()
{
	float degree,radian;
	const float pi=3.14159;
	printf("enter the angle: ");
	scanf("%f",&degree);
	radian=degree*(pi/180);
	printf("sin(%f)= %f\n",degree,sin(radian));
	printf("cos(%f)= %f\n",degree,cos(radian));
	printf("tan(%f)= %f\n",degree,tan(radian));
	printf("cosec(%f)= %f\n",degree,1/sin(radian));
	printf("sec(%f)= %f\n",degree,1/cos(radian));
	printf("cot(%f)= %f\n",degree,1/tan(radian));
	return 0;
}
