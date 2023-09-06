#include<stdio.h>
int main()
  {
  int r,c,arr[50][50],arr1[50][50],i,j;

       printf("Enter the rows and columns of the matrix : ");
       scanf("%d %d",&r,&c);

       printf("Enter the elements of first matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element [%d],[%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        } 

 	 printf("The matrix is :\n");
  		for(i=0;i<r;i++)
    		{
      		  printf("\n");
      		  for(j=0;j<c;j++)
      		  {
	            printf("%d\t",arr[i][j]);
    		  }
            }
  for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
            {
              arr1[j][i]=arr[i][j];
            }
      }

      printf("\nThe transpose of a matrix is : ");
      for(i=0;i<c;i++)
	   {
         printf("\n");
         for(j=0;j<r;j++)
	     {
           printf("%d\t",arr1[i][j]);
         }
    	}
         printf("\n");
}
