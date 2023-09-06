#include<stdio.h>
int main()
{
	int a;
	printf("Enter A Number:\n");
	scanf("%d",&a);
	if((a%5==0 ) && (a%11==0))
	{
		printf("The number %d is Divisble by 5 and 11 ",a);
	}
	else if(a%5==0)
	{
		printf("The number %d is Divisble by 5  ",a);
		
	}
	else if(a%11==0)
	{
		printf("The number %d is divisble by 11",a);
	}
	else 
	{
		printf("The number %d is not divisble 5 and 11",a);
	}
}
