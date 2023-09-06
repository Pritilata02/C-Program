#include<stdio.h>
int duplicate(int*,int);
int main()
{
	int i,n,arr1[100],d;
	printf("enter the numbers of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element : ");
		scanf("%d",&arr1[i]);
	}
	d = duplicate(arr1,n);
	printf("total duplicate number is : %d",d);
}
int duplicate(int arr1[],int n)
{
	int i,j,c,arr2[100];
	
	for(i=0;i<n;i++)
	{
		arr2[i] = 0;
	}
	
    for(i=0;i<n; i++)
    {
		for(j=0;j<n;j++)
		{
			if(arr1[i]==arr1[j])
			{
				if(arr2[j]!=0)
				{
					break;
				}
				else
				{
					arr2[i]++;
				}
			}
		}
	}
    c=0;
	for(i=0;i<n;i++)
    {
		if(arr2[i]>1)
		{
			c++;
		}
    }	
    return c;
}
