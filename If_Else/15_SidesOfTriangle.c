#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Sides:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c)
	{
		printf("It is a valid Triangle");
	}
	else if(c+b>a)
	{
		printf("It is a valid Triangle");
	}
	else if(a+c>b)
	{
		printf("It is a valid Triangle");
	}
	else
	{
		printf("It is not a valid Triangle");
	}
}
