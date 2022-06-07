#include<stdio.h>
int main()
{
	int num,max=300,i,flag;
	//create a for loop to counter 1 to 300
	
	for(num=1;num<=max;num++)
	{
		flag=0;
		//second for loop to check the numbers from 1 to 300 if prime or not
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0 & num!=1)
		  printf("%d\n",num);
	}
	return 0;
}
