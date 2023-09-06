#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,flag=0;
	char str1[100],str2[100];
	printf("enter a string : ");
	scanf("%s",&str1);
	printf("enter another string : ");
	scanf("%s",&str2);
	for(i=0;i<'\0';i++)
	{
		for(j=0;j<'\0';j++)
		{
			if(str1[i]!=str2[j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
}
