#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Any Three Numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(c<a && a>b)
	{
		printf("Maximum Number Between This Three Number is: %d",a);
	}
	else if(a<b && b>c)
	{
		printf("Maximum Number Between This Three Number is: %d",b);
	}
	else if(a<c && c>b)
	{
		printf("Maximum Number Between This Three Number is: %d",c);
	}
}
