#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Angles:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b==c && a+b+c==180)
	{
		printf("It is a Equilateral Triangle");
	}
	else if ( a==b || b==c || a==c && a+b+c==180)
	{
		printf("It is a Isosceles Triangle");
	}
	else if (a!=b!=c && a+b+c==180)
	{
		printf("It is a Scelene Triangle");
	}
	else
	{
		printf("It is not a valid Triangle");
	}
}
