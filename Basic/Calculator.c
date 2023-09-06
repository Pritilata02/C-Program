#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter The Two Numbers:");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("The Addition of %d and %d is %d \n ",a,b,c);
	printf("The Substraction of %d and %d is %d \n",a,b,d);
	printf("The Multipication of %d and %d is %d \n",a,b,e);
	printf("The Divison of %d and %d is %d \n",a,b,f);
	printf("The Remainder of %d and %d is %d \n",a,b,g);
}
