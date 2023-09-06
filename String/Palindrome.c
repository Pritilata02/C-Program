#include<stdio.h>
int Is_Palindrome(char*) ;
int main()
{
    char str[100]; 
    printf("Enter a string : ");
    scanf("%s",&str);
    if(Is_Palindrome(str))
    {
    	printf("It is a palindrome string");
	}
    else
    {
    	printf("It is not a palindrome string");
	}
}
int Is_Palindrome(char str[])
{
    int i,j,k;
    j=0;
    k=0;
    for(i=0;str[i]!='\0';i++)
	{
		j++;
	}
	for(i=0;i<j/2;i++)  
    {
    	if(str[i]==str[j-i-1])
    	k++;
 	}
 	if(k==i)
        return 1;
    else
        return 0;
}
