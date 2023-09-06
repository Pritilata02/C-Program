#include<stdio.h>
int main()
{	
	int day,week,year;
	printf("Enter the Number of Days:");
	scanf("%d",&day);
	year=day/365;
	printf("The total number of year is: %d \n",year);
	week=(day % 365)/7;
	printf("The total number of week is: %d \n",week);
	day= day-((year*365)+(week*7));
	printf("The total number of days is: %d \n",day);
	
	
}
