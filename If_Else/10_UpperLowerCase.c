#include<stdio.h>
int main()
{
	char ch;
	printf("Enter A Character:\n");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')
	{
		printf("It is a Lower case Alphabet");
	}
	else if (ch>='A' && ch<='Z')
	{
		printf("It is a Upper case Alphabet");
	}
}
