#include<stdio.h>
int main()
{	
	float a,b,c;
	printf("Enter the two angle of Triangle:");
	scanf("%f%f",&a,&b);
	c=180-(a+b);
	printf("The third angle of the Triangle is: %f \n",c);
}
