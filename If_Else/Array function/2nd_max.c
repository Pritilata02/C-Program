#include <stdio.h>
int second_largest(int*,int);
int main()
{
	int arr1[50],n,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
	      	printf("element - %d : ",i);
	      	scanf("%d",&arr1[i]);
	    }
	printf("The Second largest element in the array is :  %d ",	second_largest(arr1,n));

}
int second_largest(int arr1[],int n)
{
	int i,j=0,lrg,lrg2nd;
	lrg=arr1[0];
	for(i=0;i<n;i++)
	{
	    if(lrg<arr1[i])
	    {
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
        	if(lrg2nd<arr1[i])
	     	{
               lrg2nd=arr1[i];
            }
        }
  	}
	return lrg2nd;
}
