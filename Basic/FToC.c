#include<stdio.h>
int main()
{ 
	float f,c;
	printf("Enter the Temperature in Farenheit :");
	scanf("%f",&f);
	c=(f-32)*(5.0/9);
	printf("The Temperature value  in Celcius is %f \n ",c);
} 
