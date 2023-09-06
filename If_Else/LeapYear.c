#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter the Starting and Ending Year: \n");
	scanf("%d%d",&a,&b);
	i=a;
	while(i<=b)
	{
		if(i%400==0)
		{
			printf("%d \n",i);
		}
		else if((i%100!=0) && (i%4==0))
		{
			printf("%d \n",i);
		}
		i+=1;
	}
	
}
