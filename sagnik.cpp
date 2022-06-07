#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    for(int i=1;i<=5;i++)
    {
      int r= rand()%5+1;
      cout<<"random number = "<<r<<endl;
    }
    getch();
}
