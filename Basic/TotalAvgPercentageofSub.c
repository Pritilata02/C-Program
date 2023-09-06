#include <stdio.h>

int main()
{
    float english, physics, chemistry, math, computer, total, average, percentage;
    printf("Enter marks of five subjects:\n");
    scanf("%f%f%f%f%f",&english,&physics,&chemistry,&math,&computer);
    total = english + physics + chemistry + math + computer;
    printf("Total marks : %f\n", total);
    average = total / 5.0;
    printf("Average marks : %f\n", average);
    percentage = (total / 500.0) * 100;
    printf("Percentage : %f", percentage);
}
