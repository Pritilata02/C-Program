#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter the number upto which you want to sum natural number:");
	scanf("%d",&n);
	
	i=1;
	sum=0;
	while (i<=n)
	{
		sum=sum+i;
		i++;
	}
		printf("%d\n",sum);
}
