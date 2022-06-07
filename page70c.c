#include<stdio.h>
int main()
{
	int a,b,c;
	int lag,valid;
	printf("enter the values of three sides: ");
	scanf("%d %d %d",&a,&b,&c);
	//just dhori
	lag=a;
	if(lag<b)
	  lag=b;
	if(lag<c)
	  lag=c;
	
	if(lag==a && a<(b+c))
	     valid=1;
	if(lag==b && b<(a+c))
	     valid=1;
	if(lag==c && c<(a+b))
	     valid=1;
	
	if(valid==1)
	 printf("the tringle is valid");
	else
	 printf("the tringle is not valid");
	 
return 0;		     
}
