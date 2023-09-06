#include <stdio.h>
int Second_min(int*,int);
int main()
{
	int arr1[50],n,i;  
	printf("Enter the number of elements in the array : ");
	scanf("%d", &n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr1[i]);
	}
	
	printf("The Second smallest element in the array is :  %d ", Second_min(arr1,n));
}
int Second_min(int arr1[],int n)
{
	int i,j=0,sml,sml2nd; 
	sml=arr1[0];
	for(i=0;i<n;i++)
	{
		if(sml>arr1[i])
		{
		   sml=arr1[i];
		   j = i;
		}
	}		
	for(i=0;i<n;i++)
	{
		if(i==j)
		{
		  i++; 
		  i--;
		}
		else
		{
			if(sml2nd>arr1[i])
			{
			   sml2nd=arr1[i];
			}
		}
	}
	
	return sml2nd;
}
