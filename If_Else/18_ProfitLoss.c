#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Cost and Sales:\n");
	scanf("%d%d",&a,&b);
	if(b>a)
	{
		printf("Profit:%d",b-a);
	}
	else if(b<a)
	{
		printf("Loss:%d",a-b);
	}
	else
	{
		printf("No Profit and Loss");
	}
}
