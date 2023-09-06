#include <stdio.h>
int main()
{
    int i,j,n,flag;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
       if(n%i==0)
       {
	    	flag=1;
        	j=2;
        	while(j<=i/2)
        	{
            	if(i%j==0)
            	{
                	flag=0;
                	break;
            	}
            	j++;
        	}
        	if(flag==1)
        	{
            	printf(" %d ",n,i);
        	}
    	}
    	i++;
    }
}
