#include <stdio.h>
#include <math.h> 
int main()
{
    float x,y,result;
    printf("Enter number and power: ");
    scanf("%f%f", &x,&y);
    result = pow(x,y);
    printf("%f^%f=%f",x,y,result);
}
