#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("Maximum Number Between This Two Number is: %d",a);
	}
	else
	{
		printf("Maximum Number Between This Two Number is: %d",b);
	}
}
