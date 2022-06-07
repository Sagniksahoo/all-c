#include<stdio.h>
int main()
{
	char ch;
	int ascii;
	printf("ENTER A CHARECTER: ");
	scanf("%c",&ch);
	ascii=ch;
	printf("ASCII value of %c is %d: ",ch,ascii);
	
   //for chapital characters(A-Z)
   if((ascii>=65)&&(ascii<=90))
     printf("\n%c is a chapital character",ch);
   
   //for small characters(a-z)
   else if((ascii>=97)&&(ascii<=122))
     printf("\n%c is a small charecter",ch);
   //for digits(0-9)
   else if((ascii>=48)&&(ascii<=57))
     printf("\n%c is a digit",ch);
   //for special symbols
   else if((ascii>=0)&&(ascii<=47)||(ascii>=58)&&(ascii<=64)||(ascii>=91)&&(ascii<=96)||(ascii>=123)&&(ascii<=127))
     printf("\n%c is a special symbol",ch);
	 return 0;	 	   
}
