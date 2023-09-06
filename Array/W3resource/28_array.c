#include<stdio.h>
int main()
{
    int i,j,arr[100][100],d=0;
	printf("Enter the elements of the first matrix:\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("elements[%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix is:\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3;j++)
	    {
	     printf("%4d",arr[i][j]);
		}
	    printf("\n");
	 }
	  for(i=0;i<3;i++)
	  {
      d=d+(arr[0][i]*(arr[1][(i+1)%3]*arr[2][(i+2)%3]-arr[1][(i+2)%3]*arr[2][(i+1)%3]));
  	  }
  printf("Determinant of the matrix is:%d\n",d);
}
