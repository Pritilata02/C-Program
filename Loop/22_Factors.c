#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:\n ");
    scanf("%d",&n);
    printf("All factors of %d are:\n",n);
    i=1;
    while(i<n)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
