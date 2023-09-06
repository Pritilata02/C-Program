#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],m[100];
	int a,b,i,j;
	printf("Enter a string: \n");
	scanf("%s",&n);
	printf("Enter the word you want to find: \n");
	scanf("%s",&m);
	a=strlen(n);
	b=strlen(m);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(n[i+j]!=m[j])
			{
				break;
			}
		}
		if(j==b)
		{
			printf("The word found at :%d",i+1);
		}
	}
	
}


