#include<stdio.h>
int main()
{
	int class,sub;
	printf("ENTER THE CLASS OBTAINED BY THE STUDENT: ");
	scanf("%d",&class);
	
	printf("ENTER THE NUMBER OF SUBJECTS HE HAS FAILED: ");
	scanf("%d",&sub);
	
	switch(class)
	{
		case 1:if(sub<=3)
		         printf("he goy the grace %d marks",5*sub);
		       else
			     printf("he did not get any grace");
				 break;
		case 2:if(sub<=2)
		         printf("he goy the grace %d marks",4*sub);	
				else
				  printf("he did not get any grace");
				 break;
		case 3:if(sub<=1)
		         printf("he goy the grace %d marks",5*sub);	
				else
				  printf("he did not get any grace");
				 break;
				  	    
	}
	return 0;
}
