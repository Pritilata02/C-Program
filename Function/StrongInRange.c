#include<stdio.h>
int StrongInRange(int);
int count(int);
int fact(int);
int main()
{
	int n,m,i;
	printf("Enter the starting and ending point:");
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(StrongInRange(i))
		{
			printf("%d\n",i);
		}
	}
	
}

int fact(int n)
{
	int  i, fact=1;
    for(i=1;i<=n;i++)
    {
    	fact*=i;
	}
    return fact;
}
int StrongInRange(int n)
{
	int temp,sum;
	sum=0;temp=n;
	while(n>0)
	{
		sum+= fact(n%10);
		n/=10;
	}
	return temp==sum;
}
