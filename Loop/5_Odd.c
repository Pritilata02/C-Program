#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number upto which you want to print odd number:");
	scanf("%d",&n);
	printf("Print all odd numbers between 1 to %d are:\n",n);
	i=1;
	while (i<=n)
	{
		if(i%2!=0)
		{
		printf("%d\n",i);
	
		}
		i++;
	}
}
