#include<stdio.h>
int main()
{
	int hard,ten,grade=0;
	float car;
	printf("ENTER THE HARD: ");
	scanf("%d",&hard);
	printf("ENTER THE CAR: ");
	scanf("%f",&car);
	printf("ENTER THE TEN: ");
	scanf("%d",&ten);
	if((hard>50)&&(car>0.7)&&(ten>5600))
	  grade=10;
  else if((hard>50)&&(car<0.7))
      grade=9;
  else if((car<0.7)&&(ten>5600))
      grade=8;
  else if((hard>50)&&(ten>5600))
      grade=7;
  else if((hard>50)||(car<0.7)||(ten>5600))
      grade=6;
  else if((hard<50)&&(car>0.7)&&(ten<5600))
      grade=5;
	  
	printf("\n grade of steel is %d",grade);

 return 0;	         
}
