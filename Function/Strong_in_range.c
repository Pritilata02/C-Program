#include<stdio.h>
int StrongInRange(int,int);
int main()
{
	int start,end;
	printf("Enter the starting and Ending Point:");
	scanf("%d%d",&start,&end);
	StrongInRange(start,end);
}
int StrongInRange(int start,int end)
{
	int i,j,temp,n,a,fact,sum;
	a=0;
	for(i=start;i<=end;i++)
	{
		n=i;
		temp=n;
		sum=0;
		while(n!=0)
		{
			a=n%10;
			fact=1;
			for(j=1;j<=a;j++)
			{
				fact*=j;	
			}
			sum+=fact;
			n=n/10;
		}
		if(temp==sum)
		{
			printf("%d  ",temp);
		}
	}
}
