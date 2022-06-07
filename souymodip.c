#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,n,fact=1,flag=0,i;
	while (1)
	{
		printf("\n1.FACTORIAL OF A NUMBER: ");
		printf("\n2. prime or not: ");
		printf("\n3.odd or even: ");
		printf("\n4.exit:");
		
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("enter any number: ");
			       scanf("%d",&n); 
			       for(i=n;i>=1;i--)
			        fact=fact*i;
			       printf("factorial=%d\n",fact);
				   break;
			case 2:printf("enter any number: ");
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
				      printf("%d is a prime number\n",n);
				   else
				      printf("%d is not a prime number\n",n);
					break;
		    case 3:printf("enter the number: ");
			       scanf("%d",&n);
				   if(n%2==0)
				      printf("%d is a even number\n",n);
				   else
				      printf("%d is a odd number\n",n);
				    break;  
			case 4:exit(0);
			default:printf("invalid choice");		  	  			  	  	    
		}
	}
	return 0;
}
