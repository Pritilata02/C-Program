#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter the number upto which you want to sum odd number:");
	scanf("%d",&n);
	
	i=1;
	sum=0;
	while (i<=n)
	{
		if (i%2==0)
		{
		sum=sum+i;
		}
		i++;
	}
		printf("Sum of all odd numbers between 1 to %d are:%d\n",n,sum);
}
