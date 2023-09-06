#include<stdio.h>
int main()

{
	int a,b,x;
	printf("Enter the number and its power:\n");
	scanf("%d%d",&a,&b);
	while(b<=a)
	{
		x=a*a;
		b++;
		
	}
	printf("%d",x);
}
