#include<stdio.h>
int main()
{
	char name[100];
	int i;
	printf("Enter your name:");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]+=32;
			printf("%d",i);
		}
	}
}
