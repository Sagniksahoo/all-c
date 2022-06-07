#include<stdio.h>
int main()
{
	int count=1,wh,ot;
	float otp;
	while(count<=10)
	{
		printf("enter the working hours of empoly no %d: ",count);
		scanf("%d",&wh);
		if(wh>40)
		  {
		  	ot=wh-40;
		  	otp=ot*12;
		  	printf("employee no %d pay is %f\n",count,otp);
		  }
		  else
		    printf("you have to work for more than 40 hours to get over time pay\n");
		    
		count++;    
	}
	return 0;
}
