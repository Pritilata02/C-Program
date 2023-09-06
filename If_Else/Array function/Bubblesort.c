#include<stdio.h>
void Bubble_sort(int arr[] ,int n);
int main()
{
	int i,n,arr[100];
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("Enter %d the numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	Bubble_sort(arr,n);
	printf("Sorted list is :\n");
    for (i=0;i<n;i++)
    	printf("%d\n",arr[i]);
}
void Bubble_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
}
