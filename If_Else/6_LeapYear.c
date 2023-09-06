#include<stdio.h>
int main()
{
	int a;
	printf("Enter Any Year:\n");
	scanf("%d",&a);
	if((a%100==0) && (a%400==0))
	{
		printf(" Leap Year");
	}
	else if((a%100!=0) && (a%4==0))
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not Leap Year");
	}
}
