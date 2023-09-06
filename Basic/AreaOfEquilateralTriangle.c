#include <stdio.h>
#include <math.h> 

int main()
{
    float a,b;
    printf("Enter side of an equilateral triangle: ");
    scanf("%f",&a);
    b= (sqrt(3)/4)*(a*a);
    printf("Area of equilateral triangle is: %f",b);
}
