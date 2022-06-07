#include<stdio.h>
int main()
{
	int n,positive=0,nagative=0,zeros=0,m;
	char choise;
	printf("enter the number: ");
    scanf("%d",&n);
	m=n;
	while(m!=0)
	{
	printf("enter the number: ");
    scanf("%d",&m);
		
	    if(m>0)
	    {
	    	positive++;
		}
		else if(m<0)
		{
			nagative++;
		}
		else
		{
			zeros++;
		}
		printf("\n positive:%d \n nagative:%d \nzeros:%d ",positive,nagative,zeros);
		scanf("%c",&choise);
		n++;
	} 
	while(choise=='Y'|| choise=='y')
	printf("\ndo you want to continue(y/n?): ");
	return 0;
}
