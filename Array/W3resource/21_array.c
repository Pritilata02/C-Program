#include<stdio.h>
int main()
{
  int arr[100][100],arr1[100][100],arr2[100][100],i,j,k,r,c,r1,c1,sum=0;
  printf("Enter the rows and columns of first matrix:\n");
  scanf("%d%d",&r,&c);
  printf("Enter the rows and columns of second matrix:\n");
  scanf("%d %d",&r1,&c1);
  if(c==r1)
      {
       printf("Enter the elements of the first matrix:\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("elements [%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }   
       printf("Enter the elements of the second matrix:\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("elements [%d],[%d]:",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }    
 	 printf("The First matrix is:\n");
  		for(i=0;i<r;i++)
    		{
      		printf("\n");
      		for(j=0;j<c;j++)
          	printf("%d\t",arr[i][j]);
    		}
  
  	printf("The Second matrix is :\n");
  		for(i=0;i<r1;i++)
    		{
      		printf("\n");
      		for(j=0;j<c1;j++)
      		printf("%d\t",arr1[i][j]);
    		}
      for(i=0;i<r;i++)
        for(j=0;j<c1;j++)
        arr2[i][j]=0;
            for(i=0;i<r;i++)  
                { 
                for(j=0;j<c1;j++)   
                    {  
                    sum=0;
                        for(k=0;k<c;k++)
                        sum=sum+arr[i][k]*arr1[k][j];
                        arr2[i][j]=sum;
                     }
                 }
  printf("The multiplication of two matrices is:\n");
  for(i=0;i<r;i++)
     {
        printf("\n");
        for(j=0;j<c1;j++)
         {
           printf("%d\t",arr2[i][j]);
         }
     }
  }
else
{
	printf("Multiplication not possible.");
}
}
