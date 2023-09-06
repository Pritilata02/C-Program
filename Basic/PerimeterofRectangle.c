#include<stdio.h>
int main()
{	
	float length,breadth,perimeter;
	printf("Enter Length and Breadth:");
	scanf("%f%f",&length,&breadth);
	perimeter=2*(length+breadth);
	printf("The Perimeter of the Rectangle is: %f \n",perimeter);
	
}
