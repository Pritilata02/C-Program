#include<stdio.h>
int main()
{
	float b,c;
	printf("Enter two values : ");
	scanf("%f%f",&c,&b);
	b = c+b;
	printf("The result is %.2f",b);
}
