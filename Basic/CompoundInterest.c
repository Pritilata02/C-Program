#include <stdio.h>
#include<math.h>
int main()
{
    float p,t,r,c;
    printf("Enter principle,time,rate: ");
    scanf("%f%f%f", &p,&t,&r);
 	c= p*(pow((1 + r / 100), t));
    printf("Compound Interest = %f", c);
}
