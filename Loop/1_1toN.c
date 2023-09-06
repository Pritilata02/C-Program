#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number upto which you want to print natural number:");
	scanf("%d",&n);
	i=0;
	while (i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
