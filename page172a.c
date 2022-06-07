#include<stdio.h>
int rec_fun(int );
int non_rec_fun(int );
int main()
{
	int n,rec,non_rec;
	printf("ENTER A FIVE DIGIT POSITIVE NUMBER: ");
	scanf("%d",&n);
	
	rec=rec_fun(n);
	non_rec=non_rec_fun(n);
	
	printf("\n calculate sum using recursive =%d",rec);
	printf("\n calculate sum using non-recursive=%d",non_rec);
}
int rec_fun(int num)
{
	if(num==0)
	 return 0;
	else
	 return (num%10+rec_fun(num/10)); 
}
int non_rec_fun(int num)
{
	int r,count=0;
	while(num!=0)
	{
		r=num%10;
		count=count+r;
		num=num/10;
	}
	return count;
}
