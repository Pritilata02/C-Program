#include <stdio.h>
int main()
{
    int n, i, fact;
    printf("Enter a number:\n ");
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d : %d", n, fact);
}
