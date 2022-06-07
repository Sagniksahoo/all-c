#include<stdio.h>
int find(int);//function prototype
int main()
{
	int year,leap;
	printf("enter the year: ");
	scanf("%d",&year);
	leap=find(year);//function calling
	if(leap==1)
	  printf("%d is a leap year",year);
	else
	  printf("%d is not a leap year",year);
    return 0;	    
}
int find(int a)//function definition
{
	int i=0;
	if((a%400==0)&&(a%100!=0)||(a%4==0))
	 i=1;
    else
	 i=0;
   return (i);
}
 
