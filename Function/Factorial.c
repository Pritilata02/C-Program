#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("factorial of the number is: %d",factorial(n));
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
