#include<stdio.h>
int main()
{	
	float centimeter,meter,kilometer;
	printf("Enter the length in Centimeter :");
	scanf("%f",&centimeter);
	meter=centimeter/10;
	printf("The length in meter is: %f \n",meter);
	kilometer=centimeter/100000;
	printf("The length in kilometer: %f \n",kilometer);	
}
