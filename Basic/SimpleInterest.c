#include <stdio.h>
int main()
{
    float p,t,r,s;
    printf("Enter principle,time,rate: ");
    scanf("%f%f%f", &p,&t,&r);
    s = (p*t*r)/100;
    printf("Simple Interest : %f", s);
}
