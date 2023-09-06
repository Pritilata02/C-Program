#include<stdio.h>
int main()
{
	int a;
	printf("Enter A Number:\n");
	scanf("%d",&a);
	if(0<a)
	{
		printf("%d is a positive number",a);
	}
	else if(0>a)
	{
		printf("%d is a negetive number",a);
	}
	else if(a==0)
	{
		printf("%d is zero",a);
	}
}
