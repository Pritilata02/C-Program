#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number upto which you want to print even number:");
	scanf("%d",&n);
	printf("Print all even numbers between 1 to %d are:\n",n);
	i=1;
	while (i<=n)
	{
		if(i%2==0)
		{
		printf("%d\n",i);
	
		}
		i++;
	}
}
