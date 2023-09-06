#include<stdio.h>
int main()
{
	int n,sum=0,d;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		sum=sum*10+d;
		n/=10;
		
	}
		
	printf("%d\n",sum);
}
