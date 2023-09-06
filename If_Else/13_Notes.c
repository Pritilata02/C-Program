#include<stdio.h>
int main()
{
	int a;
	printf("Total Amount:");
	scanf("%d",&a);
	printf("Total Number of notes: \n");
	printf("500 : %d \n",a/500);
	a=a%500;
	printf("200 : %d \n",a/200);
	a=a%200;
	printf("100 : %d \n",a/100);
	a=a%100;
	printf("50 : %d \n",a/50);
	a=a%50;
	printf("20 : %d \n",a/20);
	a=a%20;
	printf("10 : %d \n",a/10);
	a=a%10;

}
