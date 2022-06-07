#include<stdio.h>
int main()
{
	int ram,shyam,ajay;
	printf("ENTER THE SGE OF RAM: ");
	scanf("%d",&ram);
	printf("ENTER THE AGE OF SHYAM: ");
	scanf("%d",&shyam);
	printf("ENTER THE AGE OF AJAY: ");
	scanf("%d",&ajay);
	
	if(ram<shyam)
	 {
	 	if(ram<ajay)
	 	  printf("\n ram:%d is youngest",ram);
	 	else
		  printf("\n ajay:%d is youngest",ajay);  
	 }
	else
	{
	    if(shyam<ajay)
		  printf("\n shyam:%d is youngest",shyam);
		else
		  printf("\n ajay:%d is youngest",ajay);  	
    }
	return 0; 
}
