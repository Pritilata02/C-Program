#include<stdio.h>
int main()
{
	int n,rev,c;
	printf("Enter a number:\n");
	scanf("%d",&n);
	c=n;
	rev=0;
	while(n>0)
	{
	rev=(rev*10)+(n%10);
        n/=10;	
	}
	if(rev==c)
	{
		printf("It is a Palindrome Number:%d\n",c);
	}
	else
	{
		printf("It is not a Palindrome Number:%d\n",c);
	}	
}
