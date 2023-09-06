#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number :");
	scanf("%d",&n);
	i=0;
	while (n!=0)
	{
		n/=10;
		
		i++;
	}
	printf("%d\n",i);
}
