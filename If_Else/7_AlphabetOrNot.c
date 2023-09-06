#include<stdio.h>
int main()
{
	char x;
	printf("Enter A Character:\n");
	scanf("%c",&x);
	if ((x>=97 && x<=122) || (x>=65 && x<=90))
	{
		printf("It is a Alphabet");
	}
	else
	{
		printf("It is not a Alphabet");
	}
}
