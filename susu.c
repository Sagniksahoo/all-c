#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,fact=1,b,c,choice;
	while(1)
	{
		printf("\n1.factorial of number: ");
		printf("\n2.odd or even: ");
		printf("\n3.addition: ");
		printf("\n4.subtraction: ");
		printf("\n5.exit:");
		
		printf("\nenter your choice:  ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("enter the number: ");
			        scanf("%d",&n);
			        for(b=n;b>=1;b--)
			           fact=fact*b;
			        printf("\nfactorial =%d",fact);
					break;
			case 2: printf("enter the number: ");
			        scanf("%d",&n);
					if(n%2==0)
					  printf("\n%d is a even number",n);
					else
					  printf("\n%d is a odd number",n);
					break;   
			case 3:printf("enter the values of n and b:");
			       scanf("%d %d",&n,&b);
				   c=(n+b);
				   printf("\naddition is %d",c);
				   break;	 
			case 4:printf("enter the values of n and b: ");
			       scanf("%d %d",&n,&b);
				   c=(n-b);
				   printf("\nsubtraction is %d",c);
				   break;
			case 5:exit(0);	    	   		   
		}
	}
	return 0;
}
