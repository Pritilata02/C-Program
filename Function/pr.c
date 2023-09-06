#include<stdio.h>
int PerfectInRange(int,int);
int main()
{
	int min,max;
	printf("Enter the starting and ending point:");
	scanf("%d%d",&n,&m);
	PerfectInRange(n,m);
	
}
int PerfectInRange(int n,int m)
{
	int i, j, sum;
	for(i=n;i<=m;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
        {
            printf("%d,",i);
        }
	}		
}
