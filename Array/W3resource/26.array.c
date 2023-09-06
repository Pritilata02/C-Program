#include<stdio.h>
int main()
{
    int n,i,j,arr[100][100];
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
	 	printf("lower triangular matrix\n");
   		for(i=0;i<n;i++)
		{
     	 printf("\n");
      	for(j=0;j<n;j++)
           if(i<=j)
             printf("%4d",arr[i][j]);
           else
             printf("%4d",0);
  		}
       printf("\n");
}

