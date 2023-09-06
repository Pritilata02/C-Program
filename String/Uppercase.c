#include<stdio.h>
void Uppercase(char*);
int main()
{
	char str[100];
	printf("Enter a string in Lowercase:");
	scanf("%s",&str);
	Uppercase(str);
	printf("Showiing the string in Uppercase:%s",str);
}
void Uppercase(char str[])
{
	int i;
	for(i=0;str[i]>=97 && str[i]<=122;i++)
	{
		str[i]-=32;
	}
}
