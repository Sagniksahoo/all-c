#include<stdio.h>
int main()
{
	int x,y,z;
	int max,valid=0;
	printf("enter the side of x: ");
	scanf("%d",&x);
	printf("enter the side of y: ");
	scanf("%d",&y);
	printf("enter the side of z: ");
	scanf("%d",&z);
	
	max=x;
	if(max<y)
	 max=y;
	if(max<z)
	 max=z; 
	  
	if((max==x)&&(x<(y+z)))
	    valid=1;
    if((max==y)&&(y<(x+z)))
        valid=1;
    if((max==z)&&(z<(x+y)))
        valid=1;
		
   if(valid==1)
     printf("the tringle is valid");
   else
     printf("the tringle is not valid");
	 
  return 0;	 	 				    
}
