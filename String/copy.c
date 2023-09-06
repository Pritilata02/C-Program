#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[100],str2[100];
	printf("enter a string : ");
	scanf("%s",&str1);
	while(str1[i]!='\0')
	{
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
	printf("the copied string is :%s",str2);
}
