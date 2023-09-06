#include<stdio.h>
void reverse(char*);
int main()
{
	char str[100];
	printf("Enter a String : ");
	scanf("%s",&str);
	reverse(str);
	printf("Reversed String is : %s",str);

}
void reverse(char str[])
{
	int i,j,n,k=0,temp;
	for(i=0;str[i]!='\0';i++)
	{
		k++;
	}
	for(j=0;j<(k-1)/2;j++)
	{
		temp=str[j];
		str[j]=str[k-1-j];
		str[k-1-j]=temp;
	}
}
