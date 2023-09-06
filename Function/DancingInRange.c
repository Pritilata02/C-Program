#include<stdio.h>
int DancingInRange(int,int);
int main()
{
	int start,end,i;
	printf("Enter starting and ending point:");
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
	
	if(is_dancing(i))
	{
		printf("%d, ",i);
	}
    }
}
int is_dancing(int n)
{
	int a,b,flag=0;
	if(n>=0 && n<=10)
	{
		flag=0;
	}
	else
	{
		while(n>10)
		{
			a=n%10;
			n/=10;
			b=n%10;
			if(a-b!=1&&a-b!=-1)
			{
				flag=1;
				break;
			}
		}
		return flag==0;
	}
}

