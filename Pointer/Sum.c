#include<stdio.h>
void Sum(int*,int*,int*,int*);
int main()
{
	int a,b,c,sumation;
	printf("Enter Three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	Sum(&a,&b,&c,&sumation);
	printf("sum is : %d \n",sumation);
}
void Sum(int *d,int *e,int *f,int *sum)
{
	*sum=*d+*e+*f;
}
