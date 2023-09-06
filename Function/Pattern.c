#include<stdio.h>
void square(int);
void rhoumbus(int);
void right_triangle(int);
void pyramid(int);
void hollow_square(int);
void hollow_pyramid(int);
int main()
{
	printf("1=square,2=rhoumbus,3=right triangle,4=pyramid,5=hollow square,6=hollow pyramid\n");
	int pattern,n;
	printf("Enter a number bet 1 to 6 to print a pattern:");
	scanf("%d",&pattern);
	printf("Enter number of rows:");
	scanf("%d",&n);
	if(pattern==1)
	{
		square(n);
	}
	else if(pattern==2)
	{
		rhoumbus(n);
	}
	else if(pattern==3)
	{
		right_triangle(n);
	}
	else if(pattern==4)
	{
		pyramid(n);
	}
	else if(pattern==5)
	{
		hollow_square(n);
	}
	else if(pattern==6)
	{
		hollow_pyramid(n);
	}
}
void square(int n)
{
	int i, j;
    for(i=1; i<=n ;i++)
    {
        for(j=1; j<=n ;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void rhoumbus(int n)
{
	int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n - i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void right_triangle(int n)
{
	int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
void pyramid(int n)
{
	 int i, j;
    for(i=1; i<=n; i++)
    { 
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }  
}
void hollow_square(int n)
{
	int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void hollow_pyramid(int n)
{
	int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==n || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
