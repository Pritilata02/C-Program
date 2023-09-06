#include <stdio.h>
float celcius(float);
int main()
{
    float  fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    printf("%f fahrenheit = %f celcius", fahrenheit, celcius(fahrenheit));
}
float celcius(float f)
{
	int c;
    c=(f-32)*5/9;
    return c;
}

