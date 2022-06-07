#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choise,n,i,fact=1,flag=0;
	while(1)
	{
		printf("\n 1.FACTORIAL OF A NUMBER:");
		printf("\n 2.PRIME OR NOT: ");
		printf("\n 3.ODD OR EVEN: ");
		printf("\n 4.EXIT: ");
		
		printf("\nenter the choise: ");
		scanf("%d",&choise);
		switch(choise)
		{
			case 1:printf("enter a number: ");
			       scanf("%d",&n);
			       for(i=n;i>=1;i--)
			         fact=fact*i;
			        printf("\nfactorial=%d",fact);
					break;
					
			case 2:printf("enter a number: ");
			       scanf("%d",&n);
				   for(i=2;i<=n/2;i++)
				   {
				   	if(n%i==0)
				   	{
				   		flag=1;
				   		break;
					}
			       }
				    if(flag==0)
					   printf("\nprime number:%d",n);
					else
					   printf("\nnot prime number:%d",n);
					break;
			case 3:printf("enter a number: ");
			       scanf("%d",&n);
				   if(n%2==0)
				     printf("\neven number:%d",n);
				   else
				     printf("\nodd number:%d",n);
					 break;
		    case 4:exit(0);
			default:printf("\nincurrect choice");			 	 		      		 
		}
		
	}
	return 0;
}
