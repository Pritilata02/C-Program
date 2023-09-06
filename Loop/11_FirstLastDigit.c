#include<stdio.h>
int main()
{
	int n,f,l;
	printf("Enter a number:\n");
	scanf("%d",&n);
	f=n;
	while(f>=10)
    {
        f/=10;
    }

    printf("First digit : %d\n", f);
	l=n%10;
	printf("Last digit: %d\n",l);
}
