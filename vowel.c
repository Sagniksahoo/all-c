#include<stdio.h>
int main()
{
	char ch;
	int count;
	count=0;
	while(count<=26)
	{
		printf("enter the alphabet: ");
    	scanf("%c",&ch);
		(ch=='A')||(ch=='a')?printf("%c ic a vowel\n",ch):(ch=='E')||(ch=='e')?printf("%c ic a vowel\n",ch):(ch=='I')||(ch=='i')?printf("%c ic a vowel\n",ch):(ch=='O')||(ch=='o')?printf("%c ic a vowel\n",ch):(ch=='U')||(ch=='u')?printf("%c ic a vowel\n",ch):printf("%c ic a consonent\n",ch);
	    count=count+1; 	
	}
	return 0;
}
