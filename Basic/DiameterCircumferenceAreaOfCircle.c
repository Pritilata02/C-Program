#include<stdio.h>
int main()
{	
	float radius,diameter,circumference,area;
	printf("Enter the Radius of The Circle:");
	scanf("%f",&radius);
	diameter=2*radius;
	printf("The diameter of the circle is: %f \n",diameter);
	circumference=2*3.14*radius;
	printf("The circumference of the circle is: %f \n",circumference);
	area=3.14*radius*radius;
	printf("The area of the circle is: %f \n",area);
	
	
}
