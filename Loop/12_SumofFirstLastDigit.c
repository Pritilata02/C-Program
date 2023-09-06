#include<stdio.h>
int main()
{
	int n,f,l,sum;
	printf("Enter a number:\n");
	scanf("%d",&n);
	f=n;
	while(f>=10)
    {
        f/=10;
    }
	l=n%10;
	sum=f+l;
	printf("Sum of first and last digit : %d \n",sum);
}
