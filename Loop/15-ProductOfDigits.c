#include<stdio.h>
int main()
{
	int n,product;
	printf("Enter a number:\n");
	scanf("%d",&n);
	product=1;
	while(n>0)
	{
		product*=n%10;
		n/=10;
	}
		
	printf("%d\n",product);
}
