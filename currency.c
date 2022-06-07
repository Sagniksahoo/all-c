#include<stdio.h>
#include<conio.h>
int main()
{
	int rs=0,one=0,two=0,five=0,ten=0,fifty=0,hundred=0;
	//get the value from the user sagnik
	printf("enter the sum of of rupees: ");
	scanf("%d",&rs);
	//main function sagnik
	if(rs>=100)
	{
		hundred=rs/100;
		rs=rs%100;
	}
	if(rs>=50)
	{
		fifty=rs/50;
		rs=rs%50;
	}
	if(rs>=10);
	{
		ten=rs/10;
		rs=rs%10;
	}
	if(rs>=5)
	{
		five=rs/5;
		rs=rs%5;
	}
	if(rs>=2)
	{
		two=rs/2;
		rs=rs%2;
	}
	if(rs>=one);
	{
		one=rs;
	}
	printf("RS100=%d\n RS50=%d\n RS10=%d\n RS5=%d\n RS2=%d\n RS1=%d\n",hundred,fifty,ten,five,two,one);
	return 0;
}
