#include <stdio.h>
float farenheit(float);
int main()
{
    float celcius;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &celcius);
    
    printf("%f Celcius = %f Fahrenheit", celcius, fahrenheit(celcius));
}
float farenheit(float c)
{
	int f;
    f=((c * 9.0 / 5.0) + 32.0);
    return f;
}

