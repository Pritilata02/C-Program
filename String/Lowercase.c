#include<stdio.h>
void Lowercase(char*);
int main()
{
	char str[100];
	printf("Enter a string in uppercase :");
	scanf("%s",&str);
	Lowercase(str);
	printf("Showing the String in Lowecase: %s",str);
}
void Lowercase(char str[])
{
	int i;
	for(i=0;str[i]>=65 && str[i]<=90;i++)
	{
		str[i]+=32;
	}
}
