#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	char op;
	
	printf("enter two numbers:   ");
	scanf("%d%d",&a,&b);
	printf("enter the operator: ");
	scanf("%c",&op);
	switch(op)
	{
		case '+':c=a+b;
		         printf("%d",c);
		         break;
		case '-':c=a-b;
		        printf("%d",c);
				break;         
	}
	return 0;
}
