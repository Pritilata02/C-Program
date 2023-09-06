#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Angle:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("It is a valid Triangle");
	}
	else
	{
		printf("It is not a valid Triangle");
	}
}
