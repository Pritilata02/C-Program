#include<stdio.h>
void delete_element(int*,int,int);
int main()
{
	int i,n,a,arr[100];
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the numbers :");
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to delete element : ");
	scanf("%d",&a);
	delete_element(arr,n,a);
	printf("The new array is:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
}
void delete_element(int arr[],int n,int a)
{
	int i;
	for(i=a-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	
}
