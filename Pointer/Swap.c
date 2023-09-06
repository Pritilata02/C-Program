#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a;
	int b;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("Enter another Number:\n");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a=%d and b=%d\n",a,b);
}
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
