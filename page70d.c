#include<stdio.h>
#include<math.h>
int main()
{

 int x,y,z;
 int max,flag=0;
 printf("enter the side: ");
 scanf("%d",&x);
 printf("enter the side: ");
 scanf("%d",&y);
 printf("enter the side: ");
 scanf("%d",&z);
 //equllateral formula
  if((x==y)&&(y==z))
   {
   	printf("the triangle is equllateral");
   }
  //isosceles formula
   if((x==y)|| (y==z) ||(x==z))
    {
  	printf("the triangle is a isosceles");
    }
  //right angled fourmula
  max=x;
  if(max<y)
    max=y;
  if(max<z)
    max=z;
	
	
  if(max==x)
    {
    	if(pow(max,2)==pow(y,2)+pow(z,2))
    	flag=1;
    }
  if(max==y)
    {
    	if(pow(max,2)==pow(x,2)+pow(z,2))
    	flag=1;
    }
  if(max==z)
     {
     	if(pow(max,2)==pow(x,2)+pow(y,2))
     	  flag=1;
	 }		
	if(flag==1)
	{
		printf("the triangle is a right angled triangle");
    }
	return 0;
}
