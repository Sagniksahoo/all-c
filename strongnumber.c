#include<stdio.h>
int main()
{
	int n,m,p,fact,sum=0;
	printf("enter the number: ");
	scanf("%d",&m);
	p=m;
	while(m!=0)
	{
		n=m%10;
		fact=1;
		while(n<=1)
		{
			fact=fact*n;
			n--;
		}
		sum=sum+fact;
		m=m/10;
	}
	if(sum==m)
	  printf("%d is strong number",m);
	else
	  printf("%d is not a strong number",m);
	return 0;    
}
