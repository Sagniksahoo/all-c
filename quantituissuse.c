#include<stdio.h>
int main()
{
	int qty,dis;
	float price,total;
	printf("enter the quantity and price: ");
	scanf("%d %f",&qty,&price);
	
	if(qty>1000)
	 dis=10;
	
	else
	 dis=0;
	 
	total=(qty*price)-(qty*price*dis/100);
	printf("toal expences RS: %f\n",total);
	return 0;  
}
