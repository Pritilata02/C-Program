#include<stdio.h>
void Reverse(char*);
void main()
{
    char str[100],a; 
    printf("Enter a string you want to reverse: ");
    scanf("%s", &str); 
    Reverse(str);
    printf("%s",str);
}
void Reverse(char str[])
{
	int i,j,temp;
    for(i=0;str[i]!='\0';i++)
    {
    	for(j=0;j<i/2;j++,i--)
    	{
    		temp=str[j];
    		str[j]=str[i-1];
    		str[i-1]=temp;
		}
	}
}

