#include <stdio.h>
void Length(char*);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    Length(str);    
}
void Length(char str[])
{
	int i;
    for (i=0;str[i]!='\0';i++);
    printf("The length of the string is: %d\n",i);
}


