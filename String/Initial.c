#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,flag=0;
	printf("enter a string : ");
	scanf("%s",&str1);
	printf("enter another string to find initial : ");
	scanf("%s",&str2);
	
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]==str2[0])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("initial found at %d",i+1);
	}
	else
	{
		printf("not found");
	}
}
