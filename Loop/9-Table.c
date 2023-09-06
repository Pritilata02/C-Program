#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number to print the table:");
	scanf("%d",&n);
	i=1;
	while (i<=10)
	{
		printf("%d*%d=%d\n",n,i,(n*i));
		i++;
	}
}
