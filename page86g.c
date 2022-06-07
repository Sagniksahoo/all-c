#include<stdio.h>
int main()
{
	int number,positive=0,nagative=0,zeros=0;
	char choice;
	do
	{
		printf("ENTER THE NUMBER:  ");
		scanf("%d",&number);
		if(number>0)
		{
			positive++;
		}
		else if(number<0)
		{
			nagative++;
		}
		else
		{
			zeros++;
		}
		printf("do you want to continue(y/n)? ");
		scanf("%c",&choice);
	}
	while((choice=='y')||(choice=='Y'));
	printf("\n positive numbers: %d \nnagative numbers: %d \nzeros: %d",positive,nagative,zeros);
	return 0;
}
