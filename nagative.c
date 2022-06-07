#include<stdio.h>
int main()
{
	int i,positive=0,nagative=0,zeros=0;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&i);
	
	if(i>0)
	{
		positive++;
	}
  else if(i<0)
    {
    	nagative++;
	}
  else
    {
    	zeros++;
	}		
	printf("\n positive:%d \n nagative:%d \n zeros:%d",positive,nagative,zeros);
	return 0;
}
