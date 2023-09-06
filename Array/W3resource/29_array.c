#include<stdio.h>
int main()
{
	int arr[10][10],i,j,r,c,k=0; 
	 printf("Enter the number of rows of the matrix:");
     scanf("%d",&r); 
     printf(" Enter the number of columns of the matrix:");
     scanf("%d",&c); 
      for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element:[%d],[%d]:",i,j);
	           scanf("%d",&arr[i][j]);
			if (arr[i][j]==0)
			 {
				k++;
			 }
            }
        }  
	if(k>((r*c)/2))
	{
		printf("Sparse matrix\n");
	}
	else
	{
		printf("Not sparse matrix.\n");
	}
}
