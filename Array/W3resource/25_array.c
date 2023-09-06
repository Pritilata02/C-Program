#include <stdio.h>
int main()
{
    int n,i,j,k,arr[100][100],arr1[100],arr2[100];
	printf("Enter the size of the square matrix:\n");
    scanf("%d",&n); 
	printf("Enter the elements of the first matrix:\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("elements[%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix is:\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n;j++)
	     printf("%4d",arr[i][j]);
	    printf("\n");
	 }
     for(i=0;i<n;i++)
     {
	  arr1[i]=0;
	  for(j=0;j<n;j++)
	  arr1[i]=arr1[i]+arr[i][j];
     }
      for(i=0;i<n;i++)
      {
	  arr2[i]=0;
	  for(j=0;j<n;j++)
		arr2[i]=arr2[i]+arr[j][i];
      }
      printf("The sum of rows and columns of the matrix is:\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("%4d",arr[i][j]);
	   printf("%8d",arr1[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("%4d",arr2[j]);
             }
            printf("\n"); 
  }
