#include<stdio.h>
int Unique(int*,int);
int main()
{
   int arr[100],i,n,a;
   printf("Enter the number of elements in array:\n");
   scanf("%d",&n);
   printf("Enter %d numbers:\n", n);
   for (i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   a=Unique(arr,n);
	printf("The unique Elements are: %d",a);
}
int Unique(int arr[],int n)
{
	int i,j,c;
	for(j=0;j<n;j++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				c++;
			}
		}
		return c;
	
	}
}
