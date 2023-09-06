#include <stdio.h>
int fibonacci(int);
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci Series up to %d terms: ",n);
    for (i=0;i<n;i++)
	{
        printf("%d ",fibonacci(i));
    }
}
int fibonacci(int n)
{
    if (n==0)
        return 0;
    else if (n==2||n==1)
    	return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

