#include<stdio.h>
int main()
{
	int qty,dis;
	float price,total;
	printf("enter the quantity and price: ");
	scanf("%d %f",&qty,&price);
	//main function
	if(qty>10000)
	  dis=50;
	  
	else
	  dis=0;
	  
	total=(qty*price)-(qty*price*dis/100);
	printf("total expences RS= %f\n",total);
	return 0;    
}
