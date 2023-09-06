#include<stdio.h>
void name_Format(char* ,char*);
int main()
{
	char str[100],str2[100];
	printf("Enter a first name and last name :");
	scanf("%s%s",&str,&str2);
	name_Format(str,str2);
	printf("Show the String in Name Format :%s %s",str,str2);
}
void name_Format(char str[],char str2[])
{
	int i,j;
	for(i=1;str[i]!='\0';i++)
	{
		if(str[0]>=97 && str[0]<=122)
		{
			str[0]-=32;
		}
		else if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
	}
	for(j=1;str2[j]!='\0';j++)
	{
		if(str2[0]>=97 && str2[0]<=122)
		{
			str2[0]-=32;
		}
		else if(str2[j]>=65 && str2[j]<=90)
		{
			str2[j]+=32;
		}
	}
}

