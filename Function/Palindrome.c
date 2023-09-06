#include<stdio.h>
int is_palindrome(int);
int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(is_palindrome(n))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
int is_palindrome(int n)
{
	int rev,temp;
	temp=n;
	rev=0;
	while(n>0)
	{
		rev=(rev*10)+(n%10);
        n/=10;	
	}
	return rev==temp;
}
