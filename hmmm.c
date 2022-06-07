#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter the three sides of triangle: ");
	scanf("%d %d %d",&s1,&s2,&s3);
	if((s1+s2)>s3)
	 {
	 	if((s2+s3)>s1)
	 	{
	 	 if((s3+s1)>s2)
		  {
		  	printf("the triangle is valid");
		  }	
		  else
		  {
		  	printf("the triangle is not valid");
		  }
		}
		else
		{
			printf("the triangle is not valid");
		}
	 }
	 else
	 {
	 	printf("the triangle is not valid");
	 }
	 return 0;
}
