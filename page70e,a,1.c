#include<stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("ENTER THE CHARECTER: ");
    scanf("%c",&ch);
    ascii=ch;
    printf("ASCII VALUE OF %c IS %d\n",ch,ascii);
    (ascii>=97)&&(ascii<=122)?printf("its '%c' a lower case alphabet\n",ch):printf("its '%c' is not a lower case alphabet");
    return 0;
}
