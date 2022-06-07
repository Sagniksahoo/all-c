#include<stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("ENTER THE CHARECTER: ");
    scanf("%c",&ch);
    ascii=ch;
    printf("ASCII VALUE OF %c IS %d\n",ch,ascii);
   (ascii>=0)&&(ascii<=47)?printf("\n %c is special symbol",ch):(ascii>=58)&&(ascii<=64)?printf("\n %c is special symbol",ch):(ascii>=91)&&(ascii<=96)?printf("\n %c is special symbol",ch):(ascii>=123)&&(ascii<=127)?printf("\n %c is special symbol",ch):printf("\n %c is not special symbol",ch);
   return 0;
}
