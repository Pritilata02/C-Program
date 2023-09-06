#include<stdio.h>
int main()
{
	char ch;
	printf("Enter A Character:\n");
	scanf("%c",&ch);
	if ( (ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("It is a Alphabet");
	}
	else if (ch>='0' && ch<='9')
	{
		printf("It is a Digit");
	}
	else
	{
		printf("It is a Special Character");
	}
}
