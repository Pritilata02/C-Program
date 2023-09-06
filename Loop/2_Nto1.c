#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number upto which you want to print natural number in reverse:");
	scanf("%d",&n);
	while (n>=1)
	{
		printf("%d\n",n);
		n--;
	}
}
