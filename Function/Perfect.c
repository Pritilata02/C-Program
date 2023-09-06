#include<stdio.h>
int is_perfect(int );
int divisor(int);
int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(is_perfect(n))
	{
		printf("Yes");
		
	}
	else
	{
		printf("No");
	}
}

int is_perfect(int n)
{
	int sum=0,i=1;
	while (i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
			
	}
	return sum==n;
}
	
