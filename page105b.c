#include<stdio.h>
int main()
{
	int i;
	float fact=1.0,res,n_res=0;
	//loop counter to 7 steps(1 to 8)
	for(i=1;i<8;i++)
	{
		fact=fact*i;
		res=i/fact;
		n_res=n_res+res;
	}
	printf("%f",n_res);
	return 0;
}
