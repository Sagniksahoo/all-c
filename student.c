#include<stdio.h>
int main()
{ 
 int m,e,s,h,b;
 float total,percentage;
 printf("enter the five subject numbers: ");
 scanf("%d %d %d %d %d",&m,&e,&s,&h,&b);
 
 total=m+e+s+h+b;
 percentage=(total/500)*100;
 printf("\n total marks:%f",total);
 printf("\n percentage:%f",percentage);
 return 0;
}
