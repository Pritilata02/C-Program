#include<stdio.h>
int is_leapyear(int);
int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(is_leapyear(n))
	{
		printf("Yes");	
	}
	else
	{
		printf("No");
	}
}
int is_leapyear(int x)
{
    return (x%400==0)||((x%4==0)&&(x%100!=0));
}
