#include <stdio.h>
int main()
{
    int n,i,num;
    printf("Enter any number to check prime: ");
    scanf("%d", &num);
	n=0;
	i=2;
	while(i<num)
    {
        if(num%i==0)
        {
            n=1;
            break;
        }
        i++;
    }
    if(n==0)
    {
        printf("%d is a prime number", num);
    }
    else if(n==1)
    {
        printf("%d is not a prime number", num);
    }
}
